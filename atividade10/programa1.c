#include <stdio.h>

#define QUANTIDADE 3

typedef struct {
    char nome[20];
    char raca[20];
    int idade;
    float peso;
} dados;

void main () {
    dados gatos[QUANTIDADE];

    //leitura dos dados dos gatos
    for (int gato = 0; gato < QUANTIDADE; gato++) {
        printf("\n---GATO %d---\n", gato+1);

        fflush(stdin);
        printf("Nome do gato: ");
        fgets(gatos[gato].nome, 19, stdin);
        fflush(stdin);
        printf("Raca do gato: ");
        fgets(gatos[gato].raca, 19, stdin);
        printf("Idade do gato: ");
        scanf("%d", &gatos[gato].idade);
        printf("Peso do gato: ");
        scanf("%f", &gatos[gato].peso);
    }

    //define maior e menor idade e peso
    int maiorIdade = gatos[0].idade, menorIdade = gatos[0].idade;
    int maiorPeso = gatos[0].peso, menorPeso = gatos[0].peso;
    for (int gato = 0; gato < QUANTIDADE; gato++) {
        if (gatos[gato].idade > maiorIdade) maiorIdade = gatos[gato].idade;
        else if (gatos[gato].idade < menorIdade) menorIdade = gatos[gato].idade;

        if (gatos[gato].peso > maiorPeso) maiorPeso = gatos[gato].peso;
        else if (gatos[gato].peso < menorPeso) menorPeso = gatos[gato].peso;
    }

    //mostra a maior idade e o nome
    printf("\nMaior idade: %d\n", maiorIdade);
    for (int gato = 0; gato < QUANTIDADE; gato++) {
        if (gatos[gato].idade == maiorIdade) printf("%s", gatos[gato].nome);
    }

    //mostra a menor idade e o nome
    printf("\nMenor idade: %d\n", menorIdade);
    for (int gato = 0; gato < QUANTIDADE; gato++) {
        if (gatos[gato].idade == menorIdade) printf("%s", gatos[gato].nome);
    }

    //mostra o maior peso e o nome
    printf("\nMaior peso: %d\n", maiorPeso);
    for (int gato = 0; gato < QUANTIDADE; gato++) {
        if (gatos[gato].peso == maiorPeso) printf("%s", gatos[gato].nome);
    }

    //mostra a menor peso e o nome
    printf("\nMenor peso: %d\n", menorPeso);
    for (int gato = 0; gato < QUANTIDADE; gato++) {
        if (gatos[gato].peso == menorPeso) printf("%s", gatos[gato].nome);
    }
}
#include <stdio.h>
#include <string.h>

#define PESSOAS 5
#define LIMITE 50

typedef struct {
    char nome[LIMITE];
    char endereco[LIMITE];
    int telefone;
} dados;

void preencherDados (dados pessoas[PESSOAS]) {
    for (int pessoa = 0; pessoa < PESSOAS; pessoa++) {
        printf("\n---Pessoa %d---\n", pessoa+1);
        
        printf("Nome: ");
        fflush(stdin);
        fgets(pessoas[pessoa].nome, LIMITE, stdin);

        printf("Endereco: ");
        fflush(stdin);
        fgets(pessoas[pessoa].endereco, LIMITE, stdin);

        printf("Telefone: ");
        scanf("%d", &pessoas[pessoa].telefone);
    }
}

void ordemAlfabetica (dados pessoas[PESSOAS]) {
    char temp[LIMITE];
    for (int i = 0; i < PESSOAS; i++) {
        for (int j = i+1; j < PESSOAS; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                strcpy(temp, pessoas[i].nome);
                strcpy(pessoas[i].nome, pessoas[j].nome);
                strcpy(pessoas[j].nome, temp);
            }
        }
    }
}

void printNomes (dados pessoas[PESSOAS]) {
    for (int pessoa = 0; pessoa < PESSOAS; pessoa ++) {
        printf("\n%s", pessoas[pessoa].nome);
    }
}

void main () {
    dados pessoas[PESSOAS];
    preencherDados(pessoas);
    ordemAlfabetica(pessoas);
    printNomes(pessoas);
}
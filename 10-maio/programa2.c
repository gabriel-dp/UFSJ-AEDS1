#include <stdio.h>

#define QUANTIDADE 10

void main () {
    float numeros[QUANTIDADE];

    for (int i = 0; i < QUANTIDADE; i++) {
        printf("\nElemento na posicao %d: ", i);
        scanf("%f", &numeros[i]);
    }

    int index1, index2;
    printf("\nDigite duas posicoes do vetor (x y): ");
    scanf("%d %d", &index1, &index2);

    if (index1 < 0 || index2 < 0 || index1 > QUANTIDADE-1 || index2 > QUANTIDADE-1) {
        printf("\n\nERRO - INDICE NAO ACESSAVEL\n\n");
        exit(0);
    }

    float num1 = numeros[index1], num2 = numeros[index2];
    float soma = num1 + num2;

    printf("A soma dos numeros eh: %.2f\n\n", soma);

}
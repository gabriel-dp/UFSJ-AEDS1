#include <stdio.h>

void somaEsubtrai (int num1, int num2, int *soma, int *subtracao) {
    *soma = num1 + num2;
    *subtracao = num1 - num2;
}

void main () {
    int num1, num2, soma, subtracao;

    printf("\nInsira o valor 1: ");
    scanf("%d", &num1);
    printf("Insira o valor 2: ");
    scanf("%d", &num2);

    somaEsubtrai(num1, num2, &soma, &subtracao);

    printf("\nSoma = %d\nSubtracao = %d\n\n", soma, subtracao);
}
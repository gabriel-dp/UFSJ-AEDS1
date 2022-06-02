#include <stdio.h>

void main () {
    int num, resultado;
    printf("\nDigite um numero inteiro positivo: ");
    scanf("%d", &num);
    resultado = (num*(num+1))/2;
    printf("A soma de todos os numeros inteiros ate %d eh: %d\n\n", num, resultado);
}
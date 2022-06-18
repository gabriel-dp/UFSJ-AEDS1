#include <stdio.h> 

int fatorial (int numero) {
    int resultado = 1;
    for (int i = numero; i > 0; i--) {
        resultado *= i;
    }

    return resultado;
}

void main () {
    int numero;
    do {
        printf("\nInsira um numero: ");
        scanf("%d", &numero);
    } while (numero < 0);   //calcula apenas fatorial de inteiros positivos

    printf("Fatorial: %d\n\n", fatorial(numero));
}
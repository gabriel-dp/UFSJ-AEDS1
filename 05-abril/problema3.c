#include <stdio.h>

void main () {
    int numero;
    printf("\nDigite um numero\n");
    scanf("%d", &numero);
    
    if (numero > 0) {
        printf("Maior que zero!\n\n");
    } else if (numero < 0) {
        printf("Menor que zero!\n\n");
    } else {
        printf("Igual a zero!\n\n");
    }
}
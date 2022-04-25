#include <stdio.h>

void main () {
    int numero;
    printf("\nDigite um numero\n");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("Numero par\n\n");
    } else {
        printf("Numero impar\n\n");
    }
}
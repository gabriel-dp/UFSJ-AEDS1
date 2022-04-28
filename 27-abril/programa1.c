#include <stdio.h>

void main () {
    float num;
    int contador = 0;
    do {
        printf("\nDigite um numero: ");
        scanf("%f", &num);
        if (num >= 100 && num <= 200) {
            contador++;
        }
    } while (num != 0);
    printf("\n\n%d numero(s) digitado(s) entre 100 e 200\n\n", contador);
}
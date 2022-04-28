#include <stdio.h>

void main () {
    int num;
    do {
        printf("\n\nDigite um inteiro para calcular o fatorial: ");
        scanf("%d", &num);
        int fatorial = 1;
        for (int i = num; i > 0; i--) {
            fatorial *= i;
        }
        printf("%d", fatorial);
    } while (num != 0);
    printf("\n\nFoi digitado um numero menor que 1. Encerrando programa...\n\n");
}
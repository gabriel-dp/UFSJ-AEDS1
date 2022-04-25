#include <stdio.h>

void main () {
    int num, fatorial = 1;
    printf("\nInsira um numero inteiro positivo: ");
    scanf("%d", &num);

    for (int i = num; i > 0; i--) {
        fatorial *= i;
    }

    printf("O fatorial de %d eh %d\n\n", num, fatorial);
}
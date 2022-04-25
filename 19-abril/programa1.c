#include <stdio.h>

void main () {
    int num;
    float total = 0, contador = 0;
    while (1) {
        printf("\nInsira um numero inteiro: ");
        scanf("%d", &num);
        contador++;
        total += (float)(num);
        if (num % 2 == 0) {
            break;
        }
        printf("%d nao eh um numero par...\n", num);
    }

    printf("%d eh um numero par\n", num);
    float media = total/contador;
    printf("\nO total eh: %f\nA media eh %f\n\n", total, media);
}
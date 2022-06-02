#include <stdio.h>

void main () {
    int num1, num2;
    printf("\nDigite dois numeros\n");
    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);

    if (num1 == num2) {
        printf("\nOs dois numeros sao iguais");
    } else {
        int maior, menor;
        if (num1 > num2) {
            maior = num1;
            menor = num2;
        } else {
            maior = num2;
            menor = num1;
        }
        printf("\nO maior numero eh %d e o menor eh %d", maior, menor);
    }

    printf("\n\n");
}
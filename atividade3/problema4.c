#include <stdio.h>

void main () {
    int num1, num2, total = 0;
    printf("\nDigite dois numeros\n");
    printf("Numero 1: ");
    scanf("%d", &num1);
    printf("Numero 2: ");
    scanf("%d", &num2);

    for (int i = 0; i < num2; i++) {
        total += num1;
    }

    printf("\nO total da multiplicacao eh: %d\n\n", total);
}
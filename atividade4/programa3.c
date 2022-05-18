#include <stdio.h>

void main () {
    int num1, num2, total = 1;
    printf("\nDigite dois numeros\n");
    printf("Numero 1 (base): ");
    scanf("%d", &num1);
    printf("Numero 2 (expoente inteiro e positivo): ");
    scanf("%d", &num2);

    for (int i = 0; i < num2; i++) {
        total *= num1;
    }

    printf("\n%d elevado a %d eh: %d\n\n", num1, num2, total);
}
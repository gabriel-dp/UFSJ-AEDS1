#include <stdio.h>

void main () {
    float num1, num2, num3;
    printf("\nDigite 3 numeros diferentes:\n");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("O maior numero eh: ");
    if (num1 > num2 && num1 > num3) {
        printf("%f", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("%f", num2);
    } else {
        printf("%f", num3);
    }
    printf("\n\n");
}
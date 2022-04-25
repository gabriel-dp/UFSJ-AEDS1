#include <stdio.h>

void main () {
    int num1, num2, num3;
    printf("\nDigite 3 numeros inteiros diferentes:\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("A sequencia eh: ");
    if (num1 < num2 && num1 < num3) {
        printf("%d|", num1);
        if (num2 < num3) {
            printf("%d|", num2);
            printf("%d", num3);
        } else {
            printf("%d|", num3);
            printf("%d", num2);
        }
    } else if (num2 < num1 && num2 < num3) {
        printf("%d|", num2);
        if (num1 < num3) {
            printf("%d|", num1);
            printf("%d", num3);
        } else {
            printf("%d|", num3);
            printf("%d", num1);
        }
    } else {
        printf("%d|", num3);
        if (num1 < num2) {
            printf("%d|", num1);
            printf("%d", num2);
        } else {
            printf("%d|", num2);
            printf("%d", num1);
        }
    }
    printf("\n\n");
}
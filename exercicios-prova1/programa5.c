#include <stdio.h>

void main () {
    int idade;
    printf("\nQual a idade? ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("kid");
    } else if (idade >= 18 && idade <= 65) {
        printf("adulto");
    } else {
        printf("velho");
    }

    printf("\n\n");
}
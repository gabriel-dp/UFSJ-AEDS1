#include <stdio.h>

void main () {
    int letra, numero;

    printf("\nInsira uma letra: ");
    scanf("%c", &letra);
    printf("\nInsira um numero: ");
    scanf("%d", &numero);

    printf("\n\n-----RESULTADO-----\n");
    for (int i = 0; i < numero; i++) {
        printf("%c", letra);
        if (i < numero-1) printf(",");
        else (printf(".\n\n"));
    }
}
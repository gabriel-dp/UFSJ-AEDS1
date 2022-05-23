#include <stdio.h>

void main () {
    char string[50];
    int contador = 0;

    printf("\nInsira uma string: ");
    fgets(string, 50, stdin);
    for (contador = 0; contador < 50; contador++) {
        if (string[contador] == '\0' || string[contador] == '\n') break;
    }
    printf("%d caracteres\n\n", contador);
}
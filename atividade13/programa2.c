#include <stdio.h>

int tamanhoStr (char string[]) {
    if (string[0] == '\0' || string[0] == '\n') return 0;
    return 1 + tamanhoStr(string+1);
}

int existe (char caractere, char string[]) {
    if (string[0] == caractere) return 1;
    if (string[0] == '\0') return 0;
    return existe(caractere, string+1);
}

void main () {
    char string[50], caractere;
    printf("\nInsira uma string (max 50 char): ");
    fgets(string, 50, stdin);
    printf("Insira um caractere: ");
    scanf("%c", &caractere);

    printf("\nTamanho da string: %d\n", tamanhoStr(string));
    if (existe(caractere, string)) 
        printf("O caractere '%c' existe na string\n\n", caractere);
    else
        printf("O caractere '%c' nao existe na string\n\n", caractere);
}
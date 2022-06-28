#include <stdio.h> 

#define LIMITE 50

int stringContem (char string[LIMITE], char caractere) {
    int existe = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == caractere) existe = 1;
    }
    return existe;
}

void main () {
    char string[LIMITE];
    printf("\nInsira a string: ");
    fgets(string, LIMITE, stdin);
    setbuf(stdin, NULL);
    char caractere;
    printf("Insira o caractere: ");
    scanf("%c", &caractere);

    if (stringContem(string, caractere)) {
        printf("\nO caractere existe na string\n\n");
    } else {
        printf("\nO caractere nao existe na string\n\n");
    }
}
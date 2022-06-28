#include <stdio.h> 

#define LIMITE 50

int indiceChar (char string[LIMITE], char caractere) {
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == caractere) return i;
    }
    return -1;
}

int stringContem (char string[LIMITE], char substring[LIMITE]) {
    while (indiceChar(string, substring[0]) != -1) {
        int indice = indiceChar(string, substring[0]); 
        int tamanho = strlen(substring);

        int igual = 1;
        for (int i = indice; i < indice+tamanho; i++) {
            if (indiceChar(string, substring[i])) igual = 0;
        }
        if (igual = 1) return 1;
    }
}

void main () {
    char string[LIMITE];
    printf("\nInsira a string: ");
    fgets(string, LIMITE, stdin);
    setbuf(stdin, NULL);
    char caractere;
    printf("Insira o caractere: ");
    scanf("%c", &caractere);

    printf("\n%d\n", stringContem("gabriel", "g"));
}
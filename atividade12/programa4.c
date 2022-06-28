#include <stdio.h> 
#include <string.h>

#define LIMITE 50

int indiceChar (char caractere, char string[LIMITE]) {
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == caractere) return i;
    }
    return -1;
}

int stringContem (char substring[LIMITE], char string[LIMITE]) {
    int substringlen = strlen(substring);

    int contem = 1;
    do {
        int primeiroIndice = indiceChar(substring[0], string);

        if (primeiroIndice == -1) return 0;
        for (int i = primeiroIndice; i < primeiroIndice+substringlen; i++) {
            if (indiceChar(substring[i], string) == -1) {
                string += i;
                contem = 0;
            }
        }
    } while (contem == 0);
    
    return 1;
}

void main () {
    char string[LIMITE], substring[LIMITE];
    printf("\nInsira a string: ");
    fgets(string, LIMITE, stdin);
    setbuf(stdin, NULL);

    printf("\nInsira a substring: ");
    fgets(substring, LIMITE, stdin);
    setbuf(stdin, NULL);

    printf("\n%d\n\n", stringContem(substring, string));
}
#include <stdio.h> 
#include <string.h>

#define LIMITE 50

void removeEnter (char str[]) {
    if (str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
}

int indiceChar (char caractere, char string[]) {
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == caractere) return i;
    }
    return -1;
}

int stringContem (char substring[], char string[]) {
    if (indiceChar(substring[0], string) == -1) return 0;
    for (int i = 0; i < strlen(substring); i++) {
        if (indiceChar(substring[i], string) == -1) {
            return stringContem(substring, string+(i+1));
        }
    }
    return 1;
}

void main () {
    char string[LIMITE], substring[LIMITE];

    printf("\nInsira a string: ");
    fgets(string, LIMITE, stdin);
    setbuf(stdin, NULL);
    removeEnter(string);

    printf("Insira a substring: ");
    fgets(substring, LIMITE, stdin);
    setbuf(stdin, NULL);
    removeEnter(substring);

    if (stringContem(substring, string)) {
        printf("\nA substring '%s' esta contida na string '%s'\n\n", substring, string);
    } else {
        printf("\nA substring '%s' nao esta contida na string '%s'\n\n", substring, string);
    }
}
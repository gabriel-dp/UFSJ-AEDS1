#include <stdio.h>
#include <string.h>

#define LIMITE 50

void main () {
    char frase[LIMITE];
    printf("\nFrase (max %d caracteres): ", LIMITE);
    fgets(frase, LIMITE, stdin);

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] != ' ') printf("%c", frase[i]);
        else printf("\n");
    }
    printf("\n");
}
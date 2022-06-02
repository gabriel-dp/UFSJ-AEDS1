#include <stdio.h>
#include <string.h>

#define LIMITE 20

void main () {
    char palavra[LIMITE];
    printf("\nPalavra (max %d caracteres): ", LIMITE);
    fgets(palavra, LIMITE, stdin);

    for (int i = 0; i < strlen(palavra); i++) {
        if (palavra[i] >= 65 && palavra[i] <= 90) palavra[i]+=32;
    }
    printf("Palavra minuscula: %s\n\n", palavra);
}
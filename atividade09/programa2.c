#include <stdio.h>
#include <string.h>

#define LIMITE 20

void main () {
    char palavra[LIMITE];
    printf("\nPalavra (max 20 caracteres): ");
    fgets(palavra, LIMITE, stdin);

    printf("Ao contrário: ");
    for (int i = strlen(palavra)-1; i > 0; i--) {
        printf("%c", palavra[i-1]);
    }
    printf("\n\n");
}
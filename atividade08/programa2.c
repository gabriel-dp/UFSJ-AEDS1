#include <stdio.h>

void main () {
    int altura, largura;
    printf("Insira a altura: ");
    scanf("%d", &altura);
    printf("Insira a largura: ");
    scanf("%d", &largura);

    if (altura > 0 && altura < 20 && largura > 0 && largura < 20) {
        //retangulo
        for (int linha = 0; linha < altura; linha++) {
            char simbolo = '';
            for (int coluna = 0; coluna < largura; coluna++) {
                if ((coluna == 0 || coluna == largura-1) && (linha == 0 || linha == altura-1)) {
                    simbolo = '+';
                } else if (coluna == 0 || coluna == largura-1) {
                    simbolo = '|';
                } else if (linha == 0 || linha == altura-1) {
                    simbolo = '-';
                } else {
                    simbolo = ' ';
                }
                printf("%c", simbolo);
                if (coluna == largura-1) printf("\n");
            } 
        }
    } else {
        printf("\nImpossível desenhar...\nAltura: %d, largura: %d\n\n", altura, largura);
    }
}
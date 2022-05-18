#include <stdio.h>

#define TAMANHO 5

void main () {
    int matriz[TAMANHO][TAMANHO], soma;

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("\nValor da posicao (%d, %d): ", i, j);
            scanf("%d", &matriz[i][j]);

            if (j > i) {
                soma += matriz[i][j];
            }
        }
    }

    printf("\n\nA soma dos elementos acima da diagonal principal eh: %d\n\n", soma);
}
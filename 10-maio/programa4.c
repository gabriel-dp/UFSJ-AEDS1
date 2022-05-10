#include <stdio.h>

#define TAMANHO 5

void main () {
    int matriz[TAMANHO][TAMANHO];

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            int num;
            printf("\nValor da posicao (%d, %d): ", i, j);
            scanf("%d", &num);
            if (i==j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    printf("\n\n-----RESULTADO-----\n");

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("| %d ", matriz[i][j]);
        }
        printf("|\n");
    }

}
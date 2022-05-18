#include <stdio.h>

#define TAMANHO1 4
#define TAMANHO2 6

void main () {
    int a[TAMANHO1][TAMANHO2], b[TAMANHO1][TAMANHO2], d[TAMANHO1][TAMANHO2];

    for (int i = 0; i < TAMANHO1; i++) {
        for (int j = 0; j < TAMANHO2; j++) {
            printf("\nInsira o numaro na posicao (%d, %d) da matriz A: ", i, j);
            scanf("%d", &a[i][j]);
            printf("\nInsira o numaro na posicao (%d, %d) da matriz B: ", i, j);
            scanf("%d", &b[i][j]);
            d[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\n\n-----Matriz D-----\n");
    for (int i = 0; i < TAMANHO1; i++) {
        printf("|");
        for (int j = 0; j < TAMANHO2; j++) {
            printf("%d|", d[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

}
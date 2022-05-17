#include <stdio.h>

#define QUANTIDADE 10

void main () {
    int x[QUANTIDADE], y[QUANTIDADE];

    for (int i = 0; i < QUANTIDADE; i++) {
        printf("\nInteiro positivo na posicao %d: ", i);
        scanf("%d", &x[i]);
    }

    printf("\n\nVetor X | Vetor Y\n");

    for (int i = 0; i < QUANTIDADE; i++) {
        y[i] = (i%2 == 0) ? (x[i]/2) : (x[i]*3); 
        printf("    %d   |", x[i]);
        printf("   %d\n", y[i]);
    }

}
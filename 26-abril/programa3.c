#include <stdio.h>

void main () {
    int n, proximo, atual = 1, ultimo = 0;
    printf("\nInsira a posição: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        proximo = atual+ultimo;
        ultimo = atual;
        atual = proximo;
    }

    printf("O numero de posicao %d eh: %d\n\n", n, ultimo);
}
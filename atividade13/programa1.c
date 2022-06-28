#include <stdio.h>

void main () {
    const int TAMANHO = 10;

    float vetor[TAMANHO];
    for (int i = 0; i < TAMANHO; i++) {
        printf("Endereco do indice %d: %p\n", i, &vetor[i]);
    }
}
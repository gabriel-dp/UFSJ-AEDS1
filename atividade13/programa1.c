#include <stdio.h>

void main () {
    const int TAMANHO = 2;
    float vetor[TAMANHO];

    printf("\n---LEITURA---\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Insira o valor na posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n---ENDERECOS---\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Endereco do indice %d: %p\n", i, &vetor[i]);
    }
    printf("\n");
}
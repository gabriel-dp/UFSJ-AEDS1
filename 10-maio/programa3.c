#include <stdio.h>

#define TAMANHO 4

void main () {
    int maior, linha, coluna, flag = 0;

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            int num;
            printf("\nInsira o valor na posicao (%d, %d): ", i, j);
            scanf("%d", &num);

            if (flag == 0 || num > maior) {
                maior = num;
                linha = i;
                coluna = j;
                flag++;
            }
        }
    }

    printf("\n\nO maior numero eh: %d", maior);
    printf("\nSua posicao eh: (%d, %d)", linha, coluna);

}
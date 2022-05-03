#include <stdio.h>

void main () {
    int num, soma = 0, contador = 0;

    do {
        printf("\nDigite um inteiro: ");
        scanf("%d", &num);
        soma += num;
        contador++;
    } while (num%2 != 0);

    float media = (float)(soma) / contador;

    printf("\n\nA media eh: %.2f\n\n", media);
}
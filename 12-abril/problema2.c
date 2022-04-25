#include <stdio.h>

void main () {
    float altura, largura;
    printf("\nDigite a altura: ");
    scanf("%f", &altura);
    printf("Digite a largura: ");
    scanf("%f", &largura);

    float area = altura * largura;
    printf("\nA area eh: %f", area);

    if (altura == largura) {
        printf("\nA forma eh um quadrado");
    } else {
        printf("\nA forma eh um retangulo");
    }

    printf("\n\n");
}
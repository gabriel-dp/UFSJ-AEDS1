#include <stdio.h>

void main () {
    float total = 0;
    int opcao;

    do {
        float valor;
        printf("\nInsira o valor do produto: ");
        scanf("%f", &valor);

        int qtd;
        printf("Quantidade: ");
        scanf("%d", &qtd);

        total += valor*qtd;

        printf("Mais algum produto? (1 - adicionar mais | 0 - finalizar): ");
        scanf("%d", &opcao);
    } while (opcao != 0);

    printf("\n\nO total da compra eh: %.2f\n\n", total);

}
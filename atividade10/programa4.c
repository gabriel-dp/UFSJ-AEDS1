#include <stdio.h>

#define PRODUTOS 5

typedef struct {
    int codigo;
    char nome[25];
    float valor;
    int quantidade;
} dados;

void preencherDados (dados produtos[PRODUTOS]) {
    for (int produto = 0; produto < PRODUTOS; produto++) {
        printf("\n---Produto %d---\n", produto+1);
        
        printf("Codigo: ");
        scanf("%d", &produtos[produto].codigo);
        printf("Nome: ");
        fflush(stdin);
        fgets(produtos[produto].nome, 25, stdin);
        printf("Valor: ");
        scanf("%f", &produtos[produto].valor);
        printf("Quantidade: ");
        scanf("%d", &produtos[produto].quantidade);
    }
}

int quantidadeExistente (int codigoBusca, dados produtos[PRODUTOS]) {
    for (int produto = 0; produto < PRODUTOS; produto++) {
        if (produtos[produto].codigo == codigoBusca) {
            return produtos[produto].quantidade;
        }
    }
    return -1;
}

void atualizarQuantidade (int codigoBusca, int quantidadeDesejada, dados produtos[PRODUTOS]) {
    for (int produto = 0; produto < PRODUTOS; produto++) {
        if (produtos[produto].codigo == codigoBusca) {
            produtos[produto].quantidade -= quantidadeDesejada;
        }
    }
}

void main () {
    
    dados produtos[PRODUTOS];
    preencherDados(produtos);

    int codigoBusca, quantidadeDesejada;
    do {
        printf("\nInsira o codigo do produto: ");
        scanf("%d", &codigoBusca);
        printf("Insira a quantidade: ");
        scanf("%d", &quantidadeDesejada);

        int restante = quantidadeExistente(codigoBusca, produtos);
        if (restante >= quantidadeDesejada) {
            printf("\n---Compra Efetuada---\n");
            atualizarQuantidade(codigoBusca, quantidadeDesejada, produtos);
        } else if (restante >= 0) {
            printf("\n---Quantidade Insuficiente (%d)---\n", restante);
        } else if (codigoBusca != 0) {
            printf("\n---Codigo Invalido---\n");
        }
    } while (codigoBusca != 0);
    
    printf("\n---Programa Encerrado---\n\n");
}
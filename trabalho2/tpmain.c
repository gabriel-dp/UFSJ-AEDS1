#include <stdio.h>
#include "tp.h"
#include "tp.c"

int obterOpcao () {
    int input;
    printf("\n(1) Cadastrar numeros dos onibus\n(2) Cadastrar lugares disponiveis\n(3) Reservar passagem\n(4) Consultar reservas por onibus\n(5) Consultar onibus por passageiro\n(6) Encerrar programa");
    printf("\nOpcao escolhida: ");
    scanf("%d", &input);
    return input;
}

void encerrarPrograma () {
    printf("\n-----PROGRAMA ENCERRADO-----\n\n");
}

void main () {
    int opcao;

    dados onibus[QUANTIDADE_ONIBUS];

    do {
        opcao = obterOpcao();

        switch (opcao) {
            case cadastrar_onibus:
                cadastrarOnibus(&onibus);
                printf("%d", onibus[3].id);
                break;
            case cadastrar_lugares:
                printf("bbb");
                break;
            case reservar:
                printf("bbb");
                break;
            case consultar_onibus:
                printf("bbb");
                break;
            case consultar_passageiro:
                printf("bbb");
                break;
            case encerrar_programa:
                encerrarPrograma();
                break;
            default: 
                //erro
                break;
        }
    } while (opcao != encerrar_programa);
}
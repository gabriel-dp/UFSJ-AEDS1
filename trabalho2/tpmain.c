#include <stdio.h>
#include "tp.h"
#include "tp.c"

int obterOpcao () {
    int input;
    printf("\n(1) Cadastrar numeros dos onibus\n(2) Cadastrar lugares disponiveis\n(3) Reservar passagem\n(4) Consultar reservas por onibus\n(5) Consultar onibus por passageiro\n(6) Encerrar programa");
    printf("\nOpcao escolhida: ");
    fflush(stdin); setbuf(stdin, NULL);
    scanf("%d", &input);
    printf("\n");
    return input;
}

void encerrarPrograma () {
    printf("\n-----PROGRAMA ENCERRADO-----\n\n");
}

void main () {
    int opcao;

    dados onibus[QUANTIDADE_ONIBUS] = {{
        .id = -1,
        .quantidadeTotal = -1
    }};

    do {
        opcao = obterOpcao();

        switch (opcao) {
            case cadastrar_onibus:
                cadastrarOnibus(&onibus);
                break;
            case cadastrar_lugares:
                cadastrarLugares(&onibus);
                break;
            case reservar:
                reservarLugar(&onibus);
                break;
            case consultar_onibus:
                consultarOnibus(&onibus);
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
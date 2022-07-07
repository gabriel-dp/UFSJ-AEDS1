/*
    Trabalho Prático 2 - AEDS1
    Autores: Gabriel de Paula & Guilherme Francis
    Data de envio: 06/julho/2022
    Código 100% autoral
*/

#include <stdio.h>
#include "tp.h"

enum opcoes_menu {
    cadastrar_onibus = 1, cadastrar_lugares, reservar_lugar, consultar_onibus, consultar_passageiro, encerrar_programa
} opcoes;

int obterOpcao () {
    int input;
    printf( "\n(1) Cadastrar numeros dos onibus"
            "\n(2) Cadastrar lugares disponiveis"
            "\n(3) Reservar passagem"
            "\n(4) Consultar reservas por onibus"
            "\n(5) Consultar onibus por passageiro"
            "\n(6) Encerrar programa");
    printf("\nOpcao escolhida: ");
    scanf("%d", &input);
    printf("\n");
    return input;
}

void main () {
    dados onibus[QUANTIDADE_ONIBUS] = {{    //define os valores de id e reservas do primeiro onibus para conseguir saber se o cadastro foi realizado
        .id = -1,
        .quantidadeReservas = -1
    }};

    int opcao;
    do {
        opcao = obterOpcao();
        switch (opcao) {
            case cadastrar_onibus:
                cadastrarOnibus(onibus);
                break;
            case cadastrar_lugares:
                cadastrarLugares(onibus);
                break;
            case reservar_lugar:
                reservarLugar(onibus);
                break;
            case consultar_onibus:
                consultarOnibus(onibus);
                break;
            case consultar_passageiro:
                consultarPassageiro(onibus);
                break;
            case encerrar_programa:
                printMensagem("PROGRAMA ENCERRADO");
                break;
            default: 
                printMensagem("OPCAO INVALIDA");
                break;
        }
    } while (opcao != encerrar_programa);
}
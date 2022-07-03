#include <stdio.h> 
#include <string.h>
#include "tp.h"

//mensagens de erros
#define ONIBUS_INVALIDO "ERRO - Onibus nao encontrado"
#define ONIBUS_LOTADO "ERRO - Onibus lotado"
#define PASSAGEIRO_INVALIDO "ERRO - Passageiro nao encontrado"
#define CADASTRO_INCOMPLETO "ERRO - Cadastro incompleto"

void printMensagem (char *mensagem) {
    printf("<---- %s ---->\n", mensagem);
}

int onibusForamCadastrados (dados onibus[]) {
    //o numero do primeiro onibus foi definido como -1 no inicio da funcao main()
    return onibus[0].id != -1;
}

int lugaresForamCadastrados (dados onibus[]) {
    //a quantidade de lugares do primeiro onibus foi definida como -1 no inicio da funcao main()
    return onibus[0].quantidadeTotal != -1;
}

void consertaString (char nome[STRING_MAX+2]) {
    int tamanho = strlen(nome);
    if (nome[tamanho] == '\n') nome[tamanho] = '\0';
    if (nome[tamanho-1] == '\n') nome[tamanho-1] = '\0';
}

void cadastrarOnibus (dados onibus[]) {
    printMensagem("CADASTRAR VEICULOS");
    for (int i = 0; i < QUANTIDADE_ONIBUS; i++) {
        printf("Numero do onibus %d: ", i+1);
        scanf("%d", &onibus[i].id);
    }
    printMensagem("VEICULOS CADASTRADOS COM SUCESSO");
}

void cadastrarLugares (dados onibus[]) {
    if (!onibusForamCadastrados(onibus)) {
        printMensagem(CADASTRO_INCOMPLETO);
        return;
    }

    printMensagem("CADASTRAR QUANTIDADE DE ASSENTOS");
    for (int i = 0; i < QUANTIDADE_ONIBUS; i++) {
        int lugares = NULL;
        do {
            if (lugares != NULL) {
                printMensagem("ERRO - Quantidade Invalida");
            }
            printf("Quantidade de lugares do onibus %d: ", onibus[i].id);
            scanf("%d", &lugares);
        } while (lugares < 0 || lugares > QUANTIDADE_LUGARES_MAX);
        onibus[i].quantidadeTotal = lugares;
        onibus[i].quantidadeDisponivel = onibus[i].quantidadeTotal;
    }
    printMensagem("ASSENTOS CADASTRADOS COM SUCESSO");
}

void reservarLugar (dados onibus[]) {
    if (!onibusForamCadastrados(onibus)|| !lugaresForamCadastrados(onibus)) {
        printMensagem(CADASTRO_INCOMPLETO);
        return;
    }

    printMensagem("RESERVAR PASSAGEM");

    int numero, erro = 1;
    printf("Numero do onibus: ");
    scanf("%d", &numero);
    for (int i = 0; i < QUANTIDADE_ONIBUS; i++) {
        if (onibus[i].id == numero) {
            erro = 2;
            if (onibus[i].quantidadeDisponivel > 0) {
                erro = 0;
                int indicePassageiro = onibus[i].quantidadeTotal - onibus[i].quantidadeDisponivel;

                char nome[STRING_MAX];
                printf("Nome do passageiro (max %d caracteres): ", STRING_MAX);
                fflush(stdin); setbuf(stdin, NULL);
                fgets(nome, STRING_MAX+2, stdin);
                fflush(stdin); setbuf(stdin, NULL);
                
                consertaString(nome);
                strncpy(onibus[i].passageiros[indicePassageiro], nome, STRING_MAX);
                onibus[i].quantidadeDisponivel--;
                onibus[i].quantidadeReservas++;
            }
        }
    }

    switch (erro) {
        case 1:
            printMensagem(ONIBUS_INVALIDO);
            return;
        case 2:
            printMensagem(ONIBUS_LOTADO);
            return;
        default:
            printMensagem("RESERVA CONFIRMADA COM SUCESSO");
            break;
    }
}

void consultarOnibus (dados onibus[]) {
    if (!onibusForamCadastrados(onibus)|| !lugaresForamCadastrados(onibus)) {
        printMensagem(CADASTRO_INCOMPLETO);
        return;
    }

    printMensagem("CONSULTAR RESERVAS");

    int numero, encontrado = 0;
    printf("Numero do onibus: ");
    scanf("%d", &numero);
    for (int i = 0; i < QUANTIDADE_ONIBUS; i++) {
        if (onibus[i].id == numero) {
            encontrado = 1;

            //tabela de dados            
            for (int i = 0;  i < 59;  i++, printf("%c", '_'));
            printf("\n| %s | %-50s |\n", "NR", "NOME");
            for (int reserva = 0; reserva < onibus[i].quantidadeReservas; reserva++) {
                printf("| %2d | %-50s |\n", reserva, onibus[i].passageiros[reserva]);
            }
            printf("|");
            for (int i = 0;  i < 57;  i++, printf("%c", '_'));
            printf("|\n");
        }
    }

    if (!encontrado) {
        printMensagem(ONIBUS_INVALIDO);
        return;
    }
}

/*
void consultarPassageiro (dados onibus[]) {

}

*/

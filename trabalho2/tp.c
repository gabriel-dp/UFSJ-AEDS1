#include <stdio.h> 
#include <string.h>
#include "tp.h"

//mensagens de erros
#define ONIBUS_INVALIDO "ERRO - Onibus nao encontrado"
#define ONIBUS_LOTADO "ERRO - Onibus lotado"
#define PASSAGEIRO_INVALIDO "ERRO - Passageiro nao encontrado"
#define CADASTRO_INCOMPLETO "ERRO - Cadastro incompleto"

#define STR_(X) #X
#define STR(X) STR_(X)

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

void consertaString (char *nome) {
    int tamanho = strlen(nome);
    if (nome[tamanho] == '\n') nome[tamanho] = '\0';
    if (nome[tamanho-1] == '\n') nome[tamanho-1] = '\0';
}

char *obterNome () {
    static char nome[STRING_MAX];
    printf("Nome do passageiro (max %d caracteres): ", STRING_MAX);
    fflush(stdin); setbuf(stdin, NULL);
    fgets(nome, STRING_MAX+2, stdin);
    fflush(stdin); setbuf(stdin, NULL);
    consertaString(nome);
    return nome;
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
                strncpy(onibus[i].passageiros[indicePassageiro], obterNome(), STRING_MAX);

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
            for (int i = 0;  i < STRING_MAX+9;  i++, printf("%c", '_'));
            printf("\n| %s | %-" STR(STRING_MAX) "s |\n", "NR", "NOME");
            for (int reserva = 0; reserva < onibus[i].quantidadeReservas; reserva++) {
                printf("| %2d | %-" STR(STRING_MAX) "s |\n", reserva, onibus[i].passageiros[reserva]);
            }
            printf("|");
            for (int i = 0;  i < STRING_MAX+7;  i++, printf("%c", '_'));
            printf("|\n");
        }
    }

    if (!encontrado) {
        printMensagem(ONIBUS_INVALIDO);
        return;
    }
}

void consultarPassageiro (dados onibus[]) {
    if (!onibusForamCadastrados(onibus)|| !lugaresForamCadastrados(onibus)) {
        printMensagem(CADASTRO_INCOMPLETO);
        return;
    }

    char *passageiro = obterNome();
    for (int i = 0;  i < 23;  i++, printf("%c", '_'));
    printf("\n| %9-s | %7-s |\n", "ONIBUS", "RESERVA");
    for (int i = 0; i < QUANTIDADE_ONIBUS; i++) {
        for (int j = 0; j < onibus[i].quantidadeReservas; j++) {
            if (strcmp(onibus[i].passageiros[j], passageiro) == 0) {
                printf("| %9-d | %7-d |\n", onibus[i].id, j+1);
            }
        }
    }
    printf("|");
    for (int i = 0;  i < 21;  i++, printf("%c", '_'));
    printf("|\n");
}

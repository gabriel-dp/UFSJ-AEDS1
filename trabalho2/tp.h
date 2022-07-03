#ifndef _TP_H
#define _TP_H

#define QUANTIDADE_ONIBUS 4
#define QUANTIDADE_LUGARES_MAX 45
#define STRING_MAX 50

typedef struct {
    int id;
    int quantidadeDisponivel;
    int quantidadeReservas;
    char passageiros[QUANTIDADE_LUGARES_MAX][STRING_MAX+1];
} dados;

void cadastrarOnibus (dados onibus[]);
void cadastrarLugares (dados onibus[]);
void reservarLugar (dados onibus[]);
void consultarOnibus (dados onibus[]);
void consultarPassageiro (dados onibus[]);
void printMensagem (char *mensagem);

#endif
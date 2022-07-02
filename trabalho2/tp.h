#ifndef QUANTIDADE_ONIBUS

#define QUANTIDADE_ONIBUS 4
#define QUANTIDADE_MAX 45

typedef struct {
    int id;
    int quantidade;
    //char *passageiros[QUANTIDADE_MAX];
} dados;

enum opcoes_menu {
    cadastrar_onibus = 1, cadastrar_lugares, reservar, consultar_onibus, consultar_passageiro, encerrar_programa
} opcoes;

void cadastrarOnibus (dados *data[QUANTIDADE_ONIBUS]);
/*
void cadastrarLugares (dados onibus[]);
void reservarLugar (dados onibus[]);
void consultarOnibus (dados onibus[]);
void consultarPassageiro (dados onibus[]);
*/

#endif
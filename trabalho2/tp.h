#ifndef QUANTIDADE_ONIBUS

#define QUANTIDADE_ONIBUS 2
#define QUANTIDADE_LUGARES_MAX 45
#define STRING_MAX 50

typedef struct {
    int id;
    int quantidadeTotal;
    int quantidadeDisponivel;
    int quantidadeReservas;
    char passageiros[QUANTIDADE_LUGARES_MAX][STRING_MAX];
} dados;

enum opcoes_menu {
    cadastrar_onibus = 1, cadastrar_lugares, reservar, consultar_onibus, consultar_passageiro, encerrar_programa
} opcoes;

void cadastrarOnibus (dados onibus[]);
void cadastrarLugares (dados onibus[]);
void reservarLugar (dados onibus[]);
void consultarOnibus (dados onibus[]);
void consultarPassageiro (dados onibus[]);

#endif
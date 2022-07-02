#include <stdio.h> 
#include "tp.h"

void inserirId (dados *data, int index) {
    int numero;
    printf("Numero onibus %d: ", index+1);
    scanf("%d", &numero);
    data->id = numero;
}

void cadastrarOnibus (dados *onibus[QUANTIDADE_ONIBUS]) {
    printf("\n-----CADASTRAR ONIBUS-----\n");
    for (int i = 0; i < QUANTIDADE_ONIBUS; i++) {
        inserirId(&onibus[i], i);
    }

}


/*

void cadastrarLugares (dados *onibus) {

}

void reservarLugar (dados *onibus) {

}

void consultarOnibus (dados *onibus) {

}

void consultarPassageiro (dados *onibus) {

}

*/

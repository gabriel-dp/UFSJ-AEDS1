#include <stdio.h>

#define TAMANHO 10

int* recebeArray () {
    static int array[TAMANHO];

    for (int i = 0; i < TAMANHO; i++) {
        printf("Valor do indice %d: ", i);
        scanf("%d", &array[i]);
    }
    return array;   
}

void analisar (int array[], int *pares, int *impares, int *negativos) {
    for (int i = 0; i < TAMANHO; i++) {
        if (array[i]%2 == 0) (*pares)++;
        else (*impares)++;
        if (array[i] < 0) (*negativos)++;
    }
}

void main () {
    int* vetor = recebeArray();
    int pares = 0, impares = 0, negativos = 0;
    analisar(vetor, &pares, &impares, &negativos);
    
    printf("\n---RESULTADO---\n");
    printf("Numeros pares = %d\nNumeros impares = %d\nNumeros negativos = %d\n\n", pares, impares, negativos);
}
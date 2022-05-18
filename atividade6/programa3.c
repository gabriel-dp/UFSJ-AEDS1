#include <stdio.h>

#define NUMEROS 10

void main () {
    float vetor[NUMEROS];
    for (int i = 0; i < NUMEROS; i++) {
        printf("\nInsira o %dº numero: ", i+1);
        scanf("%f", &vetor[i]);
    }

    float soma = 0, media, maior = vetor[0], menor = vetor[0]; 

    for (int i = 0; i < NUMEROS; i++) {
        soma += vetor[i];
        if (vetor[i] > maior) maior = vetor[i];
        if (vetor[i] < menor) menor = vetor[i];
    } 
    media = soma / NUMEROS;

    printf("\nA media eh: %.2f\n", media);
    printf("O maior eh: %.2f\n", maior);
    printf("A menor eh: %.2f\n\n", menor);
}
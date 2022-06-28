#include <stdio.h> 

void printVezes (char letra, int vezes) {
    int soma = 0;
    for (int i = 0; i < vezes; i++) {
        printf("%c", letra);
    }
    printf("\n\n");
}

void main () {
    char caractere;
    int vezes;
    printf("\nInsira o caractere: ");
    scanf("%c", &caractere);
    printf("Insira a quantidade: ");
    scanf("%d", &vezes);

    printVezes(caractere, vezes);
}
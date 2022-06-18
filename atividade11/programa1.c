#include <stdio.h>

void printNvezes (char caractere, int n) {
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("| %d ", n);
    }
    if (n > 0) printf("|\n\n");
}

void main () {
    int n;
    char caractere;

    printf("\nInsira um caractere: ");
    scanf("%c", &caractere);
    printf("Insira um inteiro: ");
    scanf("%d", &n);

    printNvezes(caractere, n);
}
#include <stdio.h>
#include <string.h>

char * converterCaracteres (char string[50], int opcao) {
    int tamanho = strlen(string);

    for (int i = 0; i < tamanho; i++) {
        if (opcao == 0 && (string[i] >= 'A' && string[i] <= 'Z')) {
            string[i] += 32;
        } else if (opcao == 1 && (string[i] >= 'a' && string[i] <= 'z')) {
            string[i] -= 32;
        }
    }

    return string;
}

void main () {
    int opcao;
    char string[50];

    printf("\nInsira uma string (max 50): ");
    fgets(string, 50, stdin);
    fflush(stdin); setbuf(stdin, NULL);
    printf("\nConverter para\n[0] - Minusculo\n[1] - Maiusculo\nOpcao: ");
    scanf("%d", &opcao);

    printf("\nResultado: %s\n", converterCaracteres(string, opcao));
}

#include <stdio.h> 

int vezesDivisivel (int dividendo, int divisor) {
    int contador = 0;
    while (dividendo%divisor == 0) {
        dividendo /= divisor;
        contador++;
    }
    return contador;
}

void main () {
    int dividendo, divisor;
    printf("\nInsira o dividendo: ");
    scanf("%d", &dividendo);
    do {
        printf("Insira o divisor: ");
        scanf("%d", &divisor);
    } while (divisor == 0 || divisor > dividendo);     //evita dividir por zero e nao divide caso seja menor

    printf("\n%d divide %d o total de %d vez(es)\n\n", divisor, dividendo, vezesDivisivel(dividendo, divisor));
}
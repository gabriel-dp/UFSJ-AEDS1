#include <stdio.h>

void main () {
    int idade, jovens = 0, velhos = 0;
    do {
        printf("\nDigite a idade de uma pessoa (0 para parar): ");
        scanf("%d", &idade);
        if (idade > 0 && idade < 21) {
            jovens++;
        } else if (idade > 50) {
            velhos++;
        }
    } while (idade != 0);
    printf("\n\nO total de jovens (idade < 21) eh: %d \nO total de velhos (idade > 50) eh: %d\n\n", jovens, velhos);
}
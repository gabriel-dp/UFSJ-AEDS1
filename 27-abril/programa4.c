#include <stdio.h>

#define PESSOAS 10

void main () {
    char nomes[PESSOAS][20];
    float salarios[PESSOAS];

    for (int i = 0; i < PESSOAS; i++) {
        printf("\nNome da pessoa (max 20 caracteres): ");
        scanf("%20s", nomes[i]);
        printf("Salário: ");
        scanf("%f", &salarios[i]);
    }

    printf("\n\n");

    for (int i = 0; i < PESSOAS; i++) {
        printf("%s  |", nomes[i]);
        
        float aliquota;
        if (salarios[i] < 1300) {
            aliquota = 0;
        } else if (salarios[i] >= 1300 && salarios[i] <= 2300) {
            aliquota = salarios[i]*0.10f;
        } else {
            aliquota = salarios[i]*0.15f;
        }
        printf("  %.2f\n\n", aliquota);
    }
}
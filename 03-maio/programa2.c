#include <stdio.h>

#define PESSOAS 3

void main () {
    float salarios[PESSOAS];

    for (int i = 0; i < PESSOAS; i++) {
        printf("\nSalario da pessoa %d: ", i+1);
        scanf("%f", &salarios[i]);
    }

    printf("\n\nAliquotas: |");
    for (int i = PESSOAS-1; i >= 0; i--) {
        float aliquota;
        if (salarios[i] < 1300) {
            aliquota = 0;
        } else if (salarios[i] >= 1300 && salarios[i] <= 2300) {
            aliquota = salarios[i]*0.10f;
        } else {
            aliquota = salarios[i]*0.15f;
        }
        printf("  %.2f |", aliquota);
    }

    printf("\n\n");
}
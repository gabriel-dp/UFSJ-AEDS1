#include <stdio.h>

#define PESSOAS 10

void main () {
    float salarios[PESSOAS];

    for (int i = 0; i < PESSOAS; i++) {
        printf("\nSalario da pessoa %d: ", i+1);
        scanf("%f", &salarios[i]);
    }

    printf("\n\nOrdem inversa: |");
    for (int i = PESSOAS-1; i >= 0; i--) {
        printf(" %.2f |",  salarios[i]);
    }

    printf("\n\n");
}
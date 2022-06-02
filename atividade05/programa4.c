#include <stdio.h>

void main () {
    float n, e = 0;
    printf("\nInsira o denominador: ");
    scanf("%f", &n);

    for (int i = 1; i <= n; i++) {
        float fatorial = 1;
        for (float j = 1; j <= i; j++) {
            fatorial *= j;
        }
        e += 1/fatorial;
    }

    printf("O resultado da soma até o denominador %.0f eh: %f\n\n", n, e);
}
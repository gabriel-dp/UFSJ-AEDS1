#include <stdio.h>

#define pessoas 3

void main () {
    int gordos = 0, idades = 0;
    for (int i = 1; i <= pessoas; i++) {

        int idade;
        printf("\nPessoa %d\n", i);
        printf("Idade: ");
        scanf("%d", &idade);

        float massa;
        printf("Massa (kg): ");
        scanf("%f", &massa);

        idades += idade;
        if (massa > 90) {
            gordos++;
        }
    }

    printf("\n\n%d pessoa(s) pesa(m) mais de 90kg\n", gordos);
    float media = idades/pessoas;
    printf("A media das idades eh %f\n\n", media);
}
#include <stdio.h>

#define pessoas 15

void main () {
    float idades [4] = {0,0,0,0};
    int contador [4] = {0,0,0,0};

    for (int i = 1; i <= pessoas; i++) {

        int idade;
        printf("\nPessoa %d\n", i);
        printf("Idade: ");
        scanf("%d", &idade);

        float massa;
        printf("Massa (kg): ");
        scanf("%f", &massa);

        if (idade >= 1 && idade <= 10) {
            idades[0] += massa;
            contador[0] += 1;
        } else if (idade >= 11 && idade <= 20) {
            idades[1] += massa;
            contador[1] += 1;
        } else if (idade >= 21 && idade <= 30) {
            idades[2] += massa;
            contador[2] += 1;
        } else if (idade >= 31) {
            idades[3] += massa;
            contador[3] += 1;
        } else {
            printf("IDADE INVALIDA");
        }
    }

    for (int i = 0; i < 4; i++) {
        printf("A faixa etária %d tem media de peso %f\n", i+1, idades[i]/(float)(contador[i]));
    }
    
    printf("\n\n";)
}
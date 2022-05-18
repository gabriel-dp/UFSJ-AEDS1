#include <stdio.h>

#define PESSOAS 15

void main () {
    float soma[4] = {0, 0, 0, 0};
    int contador[4] = {0, 0, 0, 0};

    for (int i = 0; i < PESSOAS; i++) {
        int idade;
        float massa;

        printf("\nIdade da pessoa %d: ", i+1);
        scanf("%d", &idade);
        printf("Massa da pessoa %d: ", i+1);
        scanf("%f", &massa);

        if (idade < 1) {
            printf("\nIDADE INVALIDA - RESULTADO COMPROMETIDO\n");
        } else if (idade <= 10) {
            soma[0] += massa;
            contador[0]++;
        } else if (idade <= 20) {
            soma[1] += massa;
            contador[1]++;
        } else if (idade <= 30) {
            soma[2] += massa;
            contador[2]++;
        } else {
            soma[3] += massa;
            contador[3]++;
        }
    }

    printf("\n\n-----RESULTADO-----\n\n");

    for (int i = 0; i < 4; i++) {
        float media;

        if (contador[i] == 0) media = 0;
        else media = soma[i]/contador[i];
        printf("Faixa etária %d tem media: %.2f\n", i+1, media);
    }

}
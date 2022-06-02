#include <stdio.h>

#define QUANTIDADE 3

struct vetor {
    float x;
    float y;
    float z;
};

void preencherDados (struct vetor *vetor) {
    printf("\nPosicao X: ");
    scanf("%f", &vetor->x);
    printf("Posicao Y: ");
    scanf("%f", &vetor->y);
    printf("Posicao Z: ");
    scanf("%f", &vetor->z);
}

void main () {
    
    struct vetor v, u, w;

    preencherDados(&v);
    preencherDados(&u);

    w.x = v.x + u.x;
    w.y = v.y + u.y;
    w.z = v.z + u.z;

    printf("\n\n---Vetor resultante---\nX: %f\nY: %f\nZ: %f\n\n", w.x, w.y, w.z);

}
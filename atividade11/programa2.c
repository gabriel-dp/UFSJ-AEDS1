#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} ponto;

void main () {
    ponto a, b;
    
    printf("\nInsira as coordenadas do ponto A (x y): ");
    scanf("%f %f", &a.x, &a.y);
    printf("Insira as coordenadas do ponto B (x y): ");
    scanf("%f %f", &b.x, &b.y);

    float distancia = sqrt(pow(b.x-a.x, 2) + pow(b.y-a.y, 2));
    printf("\nDistancia entre os pontos: %f\n\n", distancia);
    
}

#include <stdio.h>
#include <math.h>

typedef struct {
    float x, y;
} ponto;

void main () {
    ponto supEsq, infDir;
    
    printf("\nInsira as coordenadas do ponto Superior Esquerdo (x y): ");
    scanf("%f %f", &supEsq.x, &supEsq.y);
    printf("Insira as coordenadas do ponto Inferior Direito (x y): ");
    scanf("%f %f", &infDir.x, &infDir.y);

    float altura = fabs(supEsq.y-infDir.y);
    float largura = fabs(supEsq.x-infDir.x);
    
    float area = altura*largura;
    float perimetro = 2*(altura + largura);
    float diagonal = sqrt(pow(largura, 2) + pow(altura, 2));

    printf("\nArea: %f\nPerimetro: %f\nDiagonal: %f\n\n", area, perimetro, diagonal);
}

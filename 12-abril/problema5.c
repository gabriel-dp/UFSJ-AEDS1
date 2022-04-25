#include <stdio.h>

void main () {
    const int a = 12, b = 9, c = 8;
    float km, litros;
    char carro;

    printf("\nQual o carro?\nCarro 'A'\nCarro 'B'\nCarro 'C'\nDigite a letra correspondente maiuscula: ");
    scanf("%c", &carro);
    printf("Km percorridos: ");
    scanf("%f", &km);

    switch (carro) {
        case 'A':
            litros = km/a;
            break;
        case 'B':
            litros = km/b;
            break;
        case 'C':
            litros = km/c;
            break;        
        default:
            printf("\nCarro Inválido");
            exit(0);
            break;
    }

    printf("\nO consumo em litros é de: %f\n\n", litros);
}
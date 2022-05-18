#include <stdio.h>

void main () {
    float dolar, real, cotacao;

    printf("\nQual o valor em dolar US$? ");
    scanf("%f", &dolar);
    printf("Qual a cotacao atual? ");
    scanf("%f", &cotacao);

    real = dolar * cotacao;

    printf("\nConvertido para BRL = R$%.2f\n\n", real);
}
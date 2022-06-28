#include <stdio.h> 

int somaNumerosEntre (int menor, int maior) {
    int soma = 0;
    for (int i = menor+1; i+1 <= maior; i++) {
        soma += i;
    }
    return soma;
}

void main () {
    int num1, num2;
    printf("\nInsira o menor valor: ");
    scanf("%d", &num1);
    printf("Insira o maior valor: ");
    scanf("%d", &num2);

    printf("\nA soma dos inteiros entre %d %d eh: %d\n\n", num1, num2, somaNumerosEntre(num1,num2));
}
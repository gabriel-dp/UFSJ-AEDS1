#include <stdio.h>

float valueSpent () {
    float spent;
    printf("\nInforme o gasto total: ");
    scanf("%f", &spent);

    //validate value
    if (spent <= 0) {
        printf("Valor invalido\n\n");
        exit(0);
    }

    return spent;
}

int selectOption (float value) {
    //show options to user
    printf("\nSelecione o modo de pagamento: \n");
    printf("1 - A vista com %%10 de desconto\n");
    printf("2 - Em duas vezes (preco da etiqueta)\n");
    printf("3 - De 3 até 10 vezes com 3%% de juros ao mes (somente para compras acima de 100 reais)\n");
    printf("Opcao: ");
    
    int selected;
    scanf("%d", &selected);

    //validate selected
    if ((selected < 1 || selected > 3) || (selected == 3 && value <= 100)) {
        printf("Operacao Invalida | Revise a opcao ou o valor\n\n");
        exit(0);
    }

    return selected;
}

float pow (float number, int expoent) { //calculates the power of a number
    float total;
    for (int i = 0; i < expoent; i++) {
        if (i == 0) {
            total = number;
        } else {
            total *= number;
        }
    }
    return total;
}

void showResults (float value, int option) {
    float result;

    switch (option) {
        case 1:
            result = value * 0.9;
            printf("\nA vista fica: %f", result);
            break;
        case 2:
            result = value;
            printf("\nEm 2x sem juros: %.2f", result);
            break;
        default:
            for (int payment=3; payment <= 10; payment++) {
                result = value*pow(1.03, payment-2);
                printf("\n Em %dx com juros: %.2f", payment, result);
            }
            break;
    }
    
    printf("\n\n");
}

void main () {

    float value = valueSpent();
    int option = selectOption(value);
    showResults(value, option);

}
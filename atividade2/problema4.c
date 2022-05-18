#include <stdio.h>

void main () {
    int idade;
    printf("\nDigite sua idade\n");
    scanf("%d", &idade);
    
    if (idade >= 18 && idade <= 67) {
        printf("Pode doar!\n\n");
    } else {
        printf("Nao pode doar!\n\n");
    }
}
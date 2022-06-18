#include <stdio.h> 

int raizExata (int numero) {
    for (int i = 0; i <= numero; i++) {
        if (i*i == numero) {
            return i;
        }
    }
    return -1; //caso nao haja raiz
}

void main () {
    int numero;
    printf("\nInsira um valor para verificar a raiz: ");
    scanf("%d", &numero);

    int raiz = raizExata(numero);
    if (raizExata(numero) == -1) {
        printf("Nao existe raiz exata\n\n");
    } else {
        printf("Existe raiz exata (%d)\n\n", raiz);
    }
}
#include <stdio.h>

struct pessoa {
    char nome[20];
    int sexo;
    int idade;
};

void main () {
    struct pessoa usuario;

    printf("\nNome (max 20 caracteres): ");
    fgets(usuario.nome, 20, stdin);
    printf("Sexo (0-Fem | 1-Masc | 2-Outro): ");
    scanf("%d", &usuario.sexo);
    printf("Idade: ");
    scanf("%d", &usuario.idade);

    if (usuario.sexo == 0 && usuario.idade < 25) {
        printf("\n%sACEITA!\n\n", usuario.nome);
    } else {
        printf("\nNAO ACEITA\n\n");
    }
}
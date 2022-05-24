#include <stdio.h>
#include <string.h>

struct pessoa {
    int idade;
    float peso;
    float altura;
    char sobrenome[50];
};

void main () {
    struct pessoa gabriel;
    strcpy(gabriel.sobrenome, "de Paula");
    printf("%s", gabriel.sobrenome);
}

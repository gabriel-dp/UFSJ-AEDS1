# Exercícios sobre Funcões

### (15 junho 2022)

1 - Construa um programa que leia um valor inteiro e retorne se a raiz desse número é exata ou não. Escreva uma função para fazer a validação. Ao final imprima o resultado.

2 - Faça um programa que verifique quantas vezes um número é divisível por outro. Use uma função para fazer este cálculo. A função deve receber dois parâmetros, o dividendo e o divisor. Ao ler o divisor, é importante verificar se ele é menor que o dividendo. Ao final imprima o resultado.

3 - Faça um programa que calcule e imprima o fatorial de um número, usando uma função que receba um valor e retorne o fatorial desse valor.

4 - Dado o código-fonte abaixo, leia e execute-o para entender seu funcionamento. Se achar necessário, mude o valor da string s para entender melhor o funcionamento do programa. Explique, com suas palavras, como funcionam as funções tamanhor e numerosentre.

```c
#include<stdio.h>

int tamanhor(char str[]) {
    if (str[0] == '\0')
        return 0;
    return 1 + tamanhor(str+1);
}

int numerosentre(int a, int b) {
    if (a == b) 
        return 0;
    return 1 + numerosentre(a+1, b);
}

void main() {
    char s[10] = "JOAO";
    char c[10], c2[10];

    printf("%s possui %d caracteres.\n", s, tamanhor(s));

    printf("Entre 3 e 7 ha %d numeros.\n", numerosentre(3, 7));
}
```
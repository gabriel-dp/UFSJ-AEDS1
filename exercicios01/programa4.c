#include <stdio.h>

/*
    A função "tamanhor" é recursiva pois ela é executada dentro de seu próprio escopo.

    1 - Verificar se o char no primeiro índice da string é '/0', isso indica que a contagem encerrou e assim retorna 0
    2 - Caso o char seja diferente de '/0' significa que esse char é um caractere válido e assim é somado 1 à contagem
    3 - A função "tamanhor" é usada para verificar o restante da string usando a expressão "str+1" que exclui o primeiro char de "str"
        Assim o ciclo recomeça, voltando novamente ao passo 1 até que o retorno da função seja 0
*/

int tamanhor(char str[]) {
    if (str[0] == '\0') return 0;
    return 1 + tamanhor(str+1);
}


/*
    A função "numerosentre" é recursiva pois ela é executada dentro de seu próprio escopo.

    1 - Verificar se os valores "a" e "b" são iguais, caso sejam, o retorno é 0 pois não há um valor inteiro entre os numeros
    2 - Caso sejam valores diferentes é somado 1 à contagem, já que esse é o valor mínimo entre números diferentes
    3 - A função "numerosentre" é usada novamente para verificar o próximo número usando a expressão "a+1"
        Assim o ciclo recomeça, voltando novamente ao passo 1 até que o retorno da função seja 0
*/

int numerosentre(int a, int b) {
    if (a == b) return 0;
    return 1 + numerosentre(a+1, b);
}


void main() {
   char s[] = "GABRIEL";
   printf("%s possui %d caracteres.\n", s, tamanhor(s));
   printf("Entre 3 e 7 ha %d numeros.\n", numerosentre(6, 7));
}
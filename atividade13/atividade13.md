# Atividade 13

### (28 junho 2022)

- Problema 1:  Crie um programa que leia números reais em um vetor de tamanho 10. Imprima o endereço de cada posição desse vetor.

- Problema 2:  Crie uma função recursiva que recebe uma string e retorna o seu tamanho. Crie uma função recursiva que recebe uma string e um caractere e retorna 1 caso ele exista na string ou 0, caso contrário. Crie um programa que solicite uma string e um caractere e utilize as duas funções.

- Problema 3:  Faça um programa que receba dois valores inteiros, após receber esses dois valores, uma função deve calcular e retornar para o programa o resultado da soma e da subtração dos valores. Obs.: Apenas uma função deve realizar esta operação, desta forma, faça uso de ponteiros.

- Problema 4:  Escreva uma função recursiva para calcular a função de Ackermann A(m,n), sendo m e n valores inteiros não negativos, dada por:

```
    n + 1                       se m = 0
    A(m, n) =  A(m − 1, 1)      se m > 0 e n = 0   
    A(m − 1, A(m, n − 1))       se m > 0 e n > 0
```

- Problema 5:  Implemente um programa que crie e leia do teclado os valores para um vetor de tamanho 10. O programa deve incluir uma função que recebe o vetor criado anteriormente como parâmetro e conta a quantidade de números pares, impares e negativos. O vetor deve ser percorrido utilizando aritmética de ponteiros. Esses valores devem ser retornados via parâmetros por referência. A função main deve imprimir esses valores.
#include <stdio.h>

#define QUANTIDADE 2

struct dados {
    int matricula;
    int curso;
    int sexo;
    float cr;
};

int menuSeletor () {
    int opcao;

    printf("\n(1) Preencher a matriz de dados");
    printf("\n(2) Visualizar a matriz de dados");
    printf("\n(3) Aluna com CR mais alto do curso");
    printf("\n(4) Visualizar cursos da matriz");
    printf("\n(5) Encerrar programa");

    printf("\nOpcao Escolhida: ");
    scanf("%d", &opcao);

    return opcao;
}

void preencherDados (struct dados * alunos) {
    for (int aluno = 0; aluno < QUANTIDADE; aluno++) {
        printf("\n---Aluno %d---\n", aluno+1);

        printf("Matricula: ");
        scanf("%d", &alunos[aluno].matricula);

        printf("Curso (4 digitos): ");
        scanf("%d", &alunos[aluno].curso);

        printf("Sexo (0-Fem | 1-Masc | 2-Outro): ");
        scanf("%d", &alunos[aluno].sexo);
        if (alunos[aluno].sexo != 0 && alunos[aluno].sexo != 1) alunos[aluno].sexo = 2;     //classifica numeros diferentes de 0 e 1 como 2

        printf("CR (0 a 10): ");
        scanf("%f", &alunos[aluno].cr);
        if (alunos[aluno].cr > 10) alunos[aluno].cr = 10;
        else if (alunos[aluno].cr < 0) alunos [aluno].cr = 0;                             //limita o CR ao intervalo 0-10

        printf("\n");
    }
}

void visualizarDados (struct dados * alunos) {
    printf("\n  MATRICULA  |  CURSO | SEXO |   CR\n");
    for (int aluno = 0; aluno < QUANTIDADE; aluno++) {
        printf("  %9d  |  %4d  |  %2d  |  %.4f  \n", alunos[aluno].matricula, alunos[aluno].curso, alunos[aluno].sexo, alunos[aluno].cr);
    }
    printf("\n");
}

void maiorCrFeminino (struct dados * alunos) {
    int cursoPesquisa;
    printf("\nCurso da aluna: ");
    scanf("%d", &cursoPesquisa);

    float maiorCr = -1;
    for (int aluno = 0; aluno < QUANTIDADE; aluno++) {
        if (alunos[aluno].curso == cursoPesquisa && alunos[aluno].sexo == 0 && alunos[aluno].cr > maiorCr) {
            maiorCr = alunos[aluno].cr;
        }
    }

    if (maiorCr != -1) {
        printf("Maior CR = %.4f\nPertence a: |", maiorCr);
        for (int aluno = 0; aluno < QUANTIDADE; aluno++) {
            if (alunos[aluno].cr == maiorCr) printf(" %d |", alunos[aluno].matricula);
        }
    } else {
        printf("Nao existe aluna no curso %d", cursoPesquisa);
    }

    printf("\n\n");
}

void visualizarCursos (struct dados * alunos) {
    int cursos[QUANTIDADE], contador = 0;

    for (int aluno = 0; aluno < QUANTIDADE; aluno++) {
        int repetido = 0;
        for (int indice = 0; indice < QUANTIDADE; indice++) {
            if (alunos[aluno].curso == cursos[indice]) {
                repetido = 1;
            }
        }
        if (!repetido) {
            cursos[contador] = alunos[aluno].curso;
            contador++;
        }
    }

    printf("\nCursos existentes:\n");
    for (int curso = 0; curso < contador; curso++) {
        printf("%d\n", cursos[curso]);
    }
}

int dadosInseridos (struct dados * alunos) {
    int inserido = !(alunos[0].matricula == 0);
    if (!inserido) printf("\nPreencha os dados antes\n\n");
    return inserido;
}

void main () {

    struct dados alunos[QUANTIDADE] = { 0 };
    int encerrar = 0;

    while (!encerrar) {
        int operacao = menuSeletor();

        switch (operacao) {
            case 1:     //PREENCHER DADOS
                preencherDados(alunos);
                break;
            case 2:     //VISUALIZAR DADOS
                if (dadosInseridos(alunos)) visualizarDados(alunos);
                break;
            case 3:     //MAIOR CR FEMININO
                if (dadosInseridos(alunos)) maiorCrFeminino(alunos);
                break;
            case 4:     //VISUALIZAR CURSOS
                if (dadosInseridos(alunos)) visualizarCursos(alunos);
                break;
            case 5:     //ENCERRA PROGRAMA
                printf("\nPrograma encerrado\n\n");
                encerrar = 1;
                break;
            default:    //OPCAO INVALIDA
                printf("\nOpcao invalida - tente novamente\n\n");
                break;
        }
    }

}
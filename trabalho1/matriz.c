/*
	Trabalho Prático 1 - AEDS1
	Aluno - Gabriel de Paula Meira
	Data de envio - 25/05/2022
	Código 100% autoral
	Criado sem aplicar registros e funcoes 
	Para ver uma versao aprimorada acesse: https://github.com/gabrieldp23/UFSJ-AEDS1/blob/main/trabalho1/comoeufaria.c
*/

#include <stdio.h>

#define QUANTIDADE 20

void main () {
	int alunos[QUANTIDADE][4] = { 0 };
	int finalizar = 0; 	//controla o fim do loop

	while (!finalizar) {
		int opcao;
		printf("\n(1) Preencher a matriz de dados\n(2) Visualizar a matriz de dados\n(3) Aluna com CR mais alto do curso\n(4) Visualizar cursos da matriz\n(5) Encerrar programa\nOpcao Escolhida: ");
		scanf("%d", &opcao);

		int crLido, crValido = 0, crAluna = 0, cursos[QUANTIDADE], contador = 0, repetido = 0;
		switch (opcao) {
			case 1:
				for (int i = 0; i < QUANTIDADE; i++) {
					printf("\n---Aluno %d---", i+1);

					printf("\nNumero da matricula (9 digitos): ");
					scanf("%d", &alunos[i][0]);

					printf("Codigo do curso (4 digitos): ");
					scanf("%d", &alunos[i][1]);

					printf("Sexo (0-Fem | 1-Masc | 2-Outro): ");
					scanf("%d", &alunos[i][2]);
					if (alunos[i][2] != 0 && alunos[i][2] != 1) alunos[i][2] = 2; //classifica numeros diferentes como "outro" 

					printf("CR: ");
					scanf("%d", &alunos[i][3]);
				}
				break;

			case 2:
				if (alunos[0][0] == 0) {
					printf("\nMatriz de dados vazia - Preencha na opcao 1\n\n");
				} else {
					printf("\nMATRICULA - CURSO - SEXO - CR\n");
					for (int i = 0; i < QUANTIDADE; i++) {
						//printf matricula
						//printf curso
						//printf sexo
						//printf cr
					}
				}
				break;

			case 3:
				if (alunos[0][0] == 0) {
					printf("\nMatriz de dados vazia - Preencha na opcao 1\n\n");
				} else {
					printf("\nInsira o codigo do curso: ");
					scanf("%d", &crLido);
					for (int i = 0; i < QUANTIDADE; i++) {
						if (crLido == alunos[i][1]) {
							if (alunos[i][2] == 0 && crAluna < alunos[i][3]) {
								crAluna = alunos[i][3];
							}
							crValido = 1;
						}
					}
					if (crValido == 1) printf("\nA maior nota de uma pessoa do sexo feminino foi: %d\n\n", crAluna);
					else printf("\nNumero de curso invalido - tente novamente\n\n");
				}
				break;

			case 4: 
				if (alunos[0][0] == 0) {
					printf("\nMatriz de dados vazia - Preencha na opcao 1\n\n");
				} else {
					for (int i = 0; i < QUANTIDADE; i++) {
						repetido = 0;
						for (int j = 0; j < QUANTIDADE; j++) {
							if (alunos[i][1] == cursos[j]) repetido = 1;
						}
						if (!repetido) {
							cursos[contador] = alunos[i][1];
							contador++;
						}
					}
					printf("\nCursos da matriz:\n");
					for (int i = 0; i < contador; i++) {
						printf("%d\n", cursos[i]);
					} 
					printf("\n");
				}
				break;

			case 5:
				printf("\nPrograma encerrado\n\n");
				finalizar = 1;
				break;
			default:
				printf("\nOpcao invalida\n\n");
				break;
		}
	}
}

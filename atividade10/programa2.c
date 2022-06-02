#include <stdio.h>

#define QUANTIDADE 3

typedef struct {
    int horas;
    int minutos;
    int segundos;
} dados;

int temApenasUm (int contador, int index, dados tempos [QUANTIDADE]) {
    if (contador == 1) {
        printf("\nMaior hora => %d:%2d:%2d\n\n", tempos[index].horas, tempos[index].minutos, tempos[index].segundos);
        return 1;
    }
    return 0;
}

void main () {
    
    dados tempos [QUANTIDADE];
    printf("\n");
    for (int tempo = 0; tempo < QUANTIDADE; tempo++) {
        printf("Insira o tempo %d (horas:minutos:segundos) => ", tempo+1);
        scanf("%d:%d:%d", &tempos[tempo].horas, &tempos[tempo].minutos, &tempos[tempo].segundos);
    }

    //identifica as maiores horas
    int maiorHora = tempos[0].horas, indexHora[QUANTIDADE], contadorHora = 0;
    for (int tempo = 0; tempo < QUANTIDADE; tempo++) {
        if (tempos[tempo].horas > maiorHora) maiorHora = tempos[tempo].horas;
    }
    for (int tempo = 0; tempo < QUANTIDADE; tempo++) {
        if (tempos[tempo].horas == maiorHora) {
            indexHora[contadorHora] = tempo; 
            contadorHora++;
        }
    }
    temApenasUm(contadorHora, indexHora[0], tempos);

    //identifica os maiores minutos
    int maiorMinuto = tempos[0].minutos, indexMinuto[QUANTIDADE], contadorMinuto = 0;
    for (int tempo = 0; tempo < QUANTIDADE; tempo++) {
        if (tempos[tempo].minutos > maiorMinuto) maiorMinuto = tempos[tempo].minutos;
    }
    for (int tempo = 0; tempo < QUANTIDADE; tempo++) {
        if (tempos[tempo].minutos == maiorMinuto) {
            indexMinuto[contadorMinuto] = tempo; 
            contadorMinuto++;
        }
    }
    temApenasUm(contadorMinuto, indexMinuto[0], tempos);

    //identifica os maiores segundos
    int maiorSegundos = tempos[0].segundos, indexSegundos[QUANTIDADE], contadorSegundos = 0;
    for (int tempo = 0; tempo < QUANTIDADE; tempo++) {
        if (tempos[tempo].segundos > maiorSegundos) maiorSegundos = tempos[tempo].segundos;
    }
    for (int tempo = 0; tempo < QUANTIDADE; tempo++) {
        if (tempos[tempo].segundos == maiorSegundos) {
            indexSegundos[contadorSegundos] = tempo; 
            contadorSegundos++;
        }
    }
    //se tiver tempos iguais imprime do mesmo jeito
    temApenasUm(1, indexSegundos[0], tempos);

}
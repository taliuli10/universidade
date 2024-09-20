/*
Escreva um algoritmo em C que leia a Matrícula e tempo de corrida (em minutos) de 25000 mil atletas
que participaram das 10 Milhas Garoto.
Armazene os dados em (2) vetores apropriados. Após isso, responda:

Exiba a matrícula dos atletas que ficaram abaixo da média de tempo da prova.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ATLETAS 2500


int main() {
    int matriculas[MAX_ATLETAS];
    int tempos[MAX_ATLETAS];
    int i;
    int num_atletas = 2500;
    long long soma_tempos = 0;
    double media_tempo;

    // Leitura das matrículas e tempos
    for (i = 0; i < num_atletas; i++) {
        printf("Digite a matrícula do atleta %d: ", i + 1);
        scanf("%d", &matriculas[i]);
        printf("Digite o tempo de corrida (em minutos) do atleta %d: ", i + 1);
        scanf("%d", &tempos[i]);

        // Acumulando a soma dos tempos
        soma_tempos += tempos[i];
    }

    // Calculando a média dos tempos
    media_tempo = (double) soma_tempos / num_atletas;

    // Exibindo a matrícula dos atletas que ficaram abaixo da média
    printf("\nMatrículas dos atletas que ficaram abaixo da média de tempo (%.2f minutos):\n", media_tempo);
    for (i = 0; i < num_atletas; i++) {
        if (tempos[i] < media_tempo) {
            printf("%d\n", matriculas[i]);
        }
    }

    return 0;
}

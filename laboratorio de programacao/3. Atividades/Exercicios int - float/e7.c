/*
Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 100] com valores
inteiros aleatórios (rand/srand) no intervalo entre [10, 99]. Após isso, faça:
Exibir a quantidade de vezes que aparecem os números 3 e 6 consecutivamente no VETOR.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

int main(void) {
    int vetor[SIZE];
    int i, contador = 0;
    srand(time(NULL));
    for (i = 0; i < SIZE; i++) {
        vetor[i] = (rand() % 90) + 10; // Números entre 10 e 99
    }
    printf("Vetor gerado:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    for (i = 0; i < SIZE - 1; i++) {
        if ((vetor[i] % 10 == 3 && vetor[i + 1] / 10 == 6) &&
            (vetor[i + 1] % 10 == 3 && vetor[i + 2] / 10 == 6)) {
            contador++;
        }
    }
    printf("A quantidade de vezes que dois números consecutivos terminam com 3 e começam com 6 é: %d\n", contador);
    return 0;
}
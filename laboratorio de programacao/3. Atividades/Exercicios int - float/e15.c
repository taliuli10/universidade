/*
Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 10] com valores reais
aleatórios (rand/srand) no intervalo entre [10, 99] com uma (1) casa decimal de precisão. Após isso, faça:

Exibir os termos (e seus índices) maiores que um valor ƞ (float) escolhido pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define MIN 10
#define MAX 99

int main(void){
  float array[SIZE];
  int i;
  float numero;
  srand(time(NULL));
  for(i = 0; i < SIZE; i++)
    array[i] = rand() % (MAX - MIN + 1) + MIN;
  printf("Digite um número: ");
  scanf("%f", &numero);
  for(i = 0; i < SIZE; i++){
    if(array[i] > numero)
      printf("array[%i] = %.1f\n", i, array[i]);
  }
  return 0;
}
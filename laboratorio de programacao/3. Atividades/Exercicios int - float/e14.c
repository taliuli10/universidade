/*
Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 10] com valores reais
aleatórios (rand/srand) no intervalo entre [10, 99] com uma (1) casa decimal de precisão. Após isso, faça:

Exibir na tela a posição e a soma dos termos menores que ß .
2

Declarar BETHA (ß = 27.54) como constante com o comando #define.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define MIN 10
#define MAX 99
#define BETHA 27.54

int main(void){
  float array[SIZE];
  int i;
  float soma = 0;
  float media;
  srand(time(NULL));
  for(i = 0; i < SIZE; i++){
    array[i] = rand() % (MAX - MIN + 1) + MIN;
    soma += array[i];
  }
  media = soma / SIZE;
  printf("media: %.1f\n", media);
  for(i = 0; i < SIZE; i++){
    if(array[i] < media)
      printf("array[%i] = %.1f\n", i, array[i]);
  }
  return 0;
}
/*
Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 100] com valores
inteiros aleatórios (rand/srand) no intervalo entre [10, 99]. Após isso, faça:
Exibir na tela os termos (e seus respectivos índices) ÍMPARES e múltiplos de 7.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
#define MIN 10
#define MAX 99

int main(void){ 
  int array[SIZE];
  int i;
  int contador = 0;
  int numero;
  srand(time(NULL));
  for(i = 0; i < SIZE; i++){
    numero = rand() % (MAX - MIN + 1) + MIN;
    array[i] = numero;
    if(numero % 2 != 0 && numero % 7 ==0)
      contador++;
  }
  printf("existem %i numeros impares e multiplos de 7", contador);
  return 0;
}
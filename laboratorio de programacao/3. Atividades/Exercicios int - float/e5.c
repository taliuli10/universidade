/*
Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 100] com valores
inteiros aleatórios (rand/srand) no intervalo entre [10, 99]. Após isso, faça:
Exibir a média dos termos múltiplos de um Número (Número≥ 10) escolhido pelo usuário.
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
  int soma = 0;
  int contador = 0;
  int numero;
  int n;
  srand(time(NULL));
  for(i = 0; i < SIZE; i++){
    numero = rand() % (MAX - MIN + 1) + MIN;
    array[i] = numero;
    if(numero >= MIN)
      contador++;
  }
  printf("digite um numero maior ou igual a 10: ");
  scanf("%i", &n);
  for(i = 0; i < SIZE; i++){
    if(array[i] % n == 0)
      soma += array[i];
  }
  printf("a media dos numeros multiplos de %i eh: %i \n", n, soma / contador);
  return 0;
}
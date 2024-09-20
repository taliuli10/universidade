/*
Escrever para cada item abaixo um programa em C que preencha um array [SIZE = 10] com valores reais
aleatórios (rand/srand) no intervalo entre [10, 99] com uma (1) casa decimal de precisão. Após isso, faça:

Exibir os dados ordenados em ordem crescente ou decrescente, a escolha do usuário.
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
  float aux;
  int opcao;
  srand(time(NULL));
  for(i = 0; i < SIZE; i++)
    array[i] = rand() % (MAX - MIN + 1) + MIN;
  printf("Digite 1 para ordem crescente e 2 para ordem decrescente: ");
  scanf("%i", &opcao);
  if(opcao == 1){
    for(i = 0; i < SIZE; i++){
      for(int j = i + 1; j < SIZE; j++){
        if(array[i] > array[j]){
          aux = array[i];
          array[i] = array[j];
          array[j] = aux;
        }
        
      }
      
    }
    for(i = 0; i < SIZE; i++)
      printf("array[%i] = %.1f\n", i, array[i]);
  }
  else if(opcao == 2){
    for(i = 0; i < SIZE; i++){
      for(int j = i + 1; j < SIZE; j++){
        if(array[i] < array[j]){
          aux = array[i];
          array[i] = array[j];
          array[j] = aux;
        } 
        
      }
      
    }
    for(i = 0; i < SIZE; i++){
      printf("array[%i] = %.1f\n", i, array[i]);
    }
  }
  else
    printf("Opção inválida");
  return 0;
}

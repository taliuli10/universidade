/*
Escreva um algoritmo em C que leia a Matrícula e tempo de corrida (em minutos) de 25000 mil atletas
que participaram das 10 Milhas Garoto.
Armazene os dados em (2) vetores apropriados. Após isso, responda:

Fazer a pesquisa sequencial e a binária de uma matrícula escolhida pelo usuário.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_ATLETAS 2500

int main(){
  int matriculas[MAX_ATLETAS];
  int tempos[MAX_ATLETAS];
  int i;
  int num_atletas = 5;
  long long soma_tempos = 0;
  double media_tempo;
  int matricula_escolhida;
  int opcao;
  int posicao_binaria;
  int inicio = 0;
  int fim = num_atletas - 1;
  int meio;
  // Leitura das matrículas e tempos
  for (i = 0; i < num_atletas; i++){
    printf("Digite a matrícula do atleta %d: ", i + 1);
    scanf("%d", &matriculas[i]);
    printf("Digite o tempo de corrida (em minutos) do atleta %d: ", i + 1);
    scanf("%d", &tempos[i]);
    soma_tempos += tempos[i];
  }
  media_tempo = (double) soma_tempos / num_atletas;
  printf("Digite a matrícula que deseja pesquisar: ");
  scanf("%d", &matricula_escolhida);
  // Pesquisa sequencial
  for (i = 0; i < num_atletas; i++){
    if (matriculas[i] == matricula_escolhida){
      printf("Matrícula encontrada na posição %d.\n", i);
      break;
    }
  }
  if (i == num_atletas){
    printf("Matrícula não encontrada.\n");
  }
  // Pesquisa binária
  while (inicio <= fim){
    meio = (inicio + fim) / 2;
    if (matriculas[meio] == matricula_escolhida){
      printf("Matrícula encontrada na posição %d.\n", meio);
      break;
    }
    else if (matriculas[meio] < matricula_escolhida){
      inicio = meio + 1;
    }
    else{
      fim = meio - 1;
    }
  }
  if (inicio > fim){
    printf("Matrícula não encontrada.\n");
  }
  printf("Digite 1 para pesquisa sequencial ou 2 para pesquisa binária: ");
  scanf("%d", &opcao);
  if (opcao == 1) {
    // Pesquisa sequencial
    for (i = 0; i < num_atletas; i++) {
      if (matriculas[i] == matricula_escolhida) {
        printf("Matrícula encontrada na posição %d.\n", i);
        break;
      }
    }
    if (i == num_atletas){
      printf("Matrícula não encontrada.\n");
    }
  }
  else {
    // Pesquisa binária
    while (inicio <= fim) {
      meio = (inicio + fim) / 2;
      if (matriculas[meio] == matricula_escolhida) {
        printf("Matrícula encontrada na posição %d.\n", meio);
        break;
      }
      else if (matriculas[meio] < matricula_escolhida) {
        inicio = meio + 1;
      }
      else {
        fim = meio - 1;
      }
    }
    if (inicio > fim)
      printf("Matrícula não encontrada.\n");
  }
  return 0;  
}
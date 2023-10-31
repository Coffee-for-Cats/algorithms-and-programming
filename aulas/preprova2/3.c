#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
  int tam = -1;
  while (tam < 1) {  
    printf("Qual o tamanho do vetor que voce quer preencher? \n");
    scanf("%d", &tam);
  }

  // 1 = sim, pq até agora não tem nenhum numero.
  int todosMaioresQue20 = 1;

  int vetor[tam];
  for (int i = 0; i < tam; i++) {
    printf("Digite um numero inteiro valido (indice %d): ", i);
    scanf("%d", &vetor[i]);
    // se algum número par for menor que 20, seta essa variável para 0 para eu saber dps.
    if (i % 2 == 0 && vetor[i] < 20) todosMaioresQue20 = 0;
  }

  if (todosMaioresQue20 == 1) {
    printf("Sim, todos os numeros em indices pares sao maiores que 20!");
  } else {
    printf("Nem todos os numeros em indices pares sao maiores que 20!");
  }
}
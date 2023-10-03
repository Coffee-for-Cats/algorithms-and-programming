#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>

int main() {
  // Isso é uma "lista" (vetor) de números inteiros de tamanho 10.
  int notas[10];

  // Vetores começam em 0. O primeiro item da lista tem o valor 5.
  notas[0] = 5;

  // Use loops para iterar sobre vetores!
  // Esse código preenche o vetor com os números [0, 1, ... 8];
  for (int i = 0; i < 9; i++) {
    // Da para usar variaveis para acessar items da lista.
    notas[i] = i;
  }

  for (int i = 1; i < 10; i++) {
    // Cuidado com "i - 1"! Se tu acessar um valor fora
    // dos limites do vetor pode ocorrer bugs.
    printf("O numero %d da lista eh: %d \n", i, notas[i - 1]);
  }
}
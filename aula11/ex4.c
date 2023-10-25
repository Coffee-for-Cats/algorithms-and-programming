#include <stdio.h>

#define size 5

int main() {
  int matriz[size][size];

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("\nDigite a posicao %d|%d da matriz: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // procura por um número.
  int pesquisa;
  int encontrado = 0;
  printf("\nDigite o numero a ser procurado na matriz: ");
  scanf("%d", &pesquisa);

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (matriz[i][j] == pesquisa) {
        printf("\nValor encontrado na posicao: %d|%d", i, j);
        encontrado = 1;
      }
    }
  }

  if (encontrado == 0)
  {
    printf("\nValor nao encontrado na matriz!");
  }
}
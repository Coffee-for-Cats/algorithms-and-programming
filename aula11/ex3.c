#include <stdio.h>

#define size 4

int main() {
  int matriz[size][size];

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("\nDigite a posicao %d / %d da matriz: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  int maior = matriz[0][0];
  int i_maior = 0;
  int j_maior = 0;
  // acha o maior valor
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (matriz[i][j] > maior) {
        maior = matriz[i][j];
        i_maior = i;
        j_maior = j;
      }
    }
  }

  printf("\nA posicao do maior valor eh [%d][%d]", i_maior, j_maior);
}
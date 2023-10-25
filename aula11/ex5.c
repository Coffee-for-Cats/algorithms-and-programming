#include <stdio.h>

#define size 2

int main() {
  int matriz[size][size];
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("\nDigite [%d][%d] da matriz 1: ");
      scanf("%d", &matriz[i][j]);
    }
  }

  int matriz2[size][size];
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("\nDigite [%d][%d] da matriz 2: ");
      scanf("%d", &matriz2[i][j]);
    }
  }

  int matriz3[size][size];
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if(matriz[i][j] > matriz2[i][j]) {
        matriz3[i][j] = matriz[i][j];
      } else {
        matriz3[i][j] = matriz2[i][j];
      }
    }
  }

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("\nMatriz 3 [%d][%d] = %d.", i, j, matriz3[i][j]);
    }
  }
}
#include <stdio.h>

int main() {
  int matriz[4][4];

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      matriz[i][j] = (i + 1) * (j + 1);
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}
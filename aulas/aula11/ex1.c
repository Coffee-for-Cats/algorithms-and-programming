#include <stdio.h>

int main() {
  int matriz[4][4];

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("[%d][%d]", i, j);
      scanf("%f", &matriz[i][j]);
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if(matriz[i][j]) {
        
      }
    }
  }
}
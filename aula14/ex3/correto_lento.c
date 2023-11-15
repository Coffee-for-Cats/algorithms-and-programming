#include <stdio.h>

int main() {
  int matriz[4][4];
  int i, j, soma;

  // enche a matriz com valores.
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf("[%d][%d] = ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // printa a matriz de forma bonita.
  printf("Matriz compelta: \n");
  for (i = 0; i < 4; i++)
  {
    for (j = 0; j < 4; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }


  printf("Soma acima da diagonal principal: ");
  for (i = 0; i < 4; i++)
  {
    for (j = i + 1; j < 4; j++)
    {
      soma += matriz[i][j];
    }
  }
  printf("%d\n", soma);


  printf("Valores abaixo da diagonal secundaria: ");
  for (i = 0; i < 4; i++)
  {
    for (j = 4 - i; j < 4; j++)
    {
      printf("%d ", matriz[i][j]);
    }
  }
}
// Elabore um programa que leia dados em matriz 4X4 de inteiros e posteriormente
// imprima os elementos que estão armazenados abaixo da diagonal secundária
// e some os valores que estão acima da diagonal principal.

#include <stdio.h>

int perguntaValor(int i, int j)
{
  int temp;
  printf("[%d][%d]", i, j);
  scanf("%d", &temp);
  return temp;
}

int printaMatriz(int matriz[4][4])
{
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int matriz[4][4];

  // enche a matriz com valores.
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      matriz[i][j] = perguntaValor(i, j);
    }
  }

  // printa a matriz só para eu poder visualizar o resultado.
  printaMatriz(matriz);


  // # imprime os elementos armazenados abaixo da diagonal secundária.
  printf("\nNumeros abaixo da diagonal secundaria: \n");
  for (int lin_sec = 0; lin_sec < 3; lin_sec++)
  // observe que eu só vou até 3, não executo no 4 para não acessar oq não deveria.
  {
    // lin_sec tem o indice da linha da diagonal secundária.
    // col_sec tem o indice da coluna da diagonal secundária.
    int col_sec = 3 - lin_sec;

    // para achar oque está diretamente abaixo da posição (lin_sec, col_sec) basta:
    int abaixo_lin_sec = lin_sec + 1;

    printf(
      "[%d][%d] = %d\n",
      abaixo_lin_sec, col_sec,
      matriz[abaixo_lin_sec][col_sec]
    );
  }

  printf("\nSoma dos numeros acima da diagonal principal: \n");
  int soma = 0;
  // observe que comecei a contar no 0, mas acesso o vetor com +1.
  for (int i = 0; i < 3; i++) {
    // bem mais compacto.
    printf("[%d][%d] = %d\n", i, i + 1, matriz[i][i + 1]);
    soma += matriz[i][i + 1];
  }

  printf("Soma: %d\n", soma);
}
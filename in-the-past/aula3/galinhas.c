#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int galinhas;
  printf("Quantas galinhas voce possui? \n");
  scanf("%d", &galinhas);

  float preco;
  printf("Qual o preco da duzia hoje? \n");
  scanf("%f", &preco);
  preco = preco / 12;

  printf("Hoje voce ganhara R$ %.2f! \n", preco * galinhas);
}

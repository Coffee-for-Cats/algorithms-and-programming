#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
  int dia, mes, ano;

  printf("Digite o dia ");
  scanf("%d", &dia);
  printf("Digite o mes ");
  scanf("%d", &mes);
  printf("Digite o ano ");
  scanf("%d", &ano);

  if (dia < 0) {
    printf("\nO dia nao pode ser menor que 0!");
  } else if (mes > 12 || mes < 1) {
    printf("\nValor do mes invalido!");
  } else {

    int tamanhoDoMes;
    switch (mes) {
    case 2:
      tamanhoDoMes = 28;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      tamanhoDoMes = 30;
    default:
      tamanhoDoMes = 31;
    }

    if (dia > tamanhoDoMes) {
      printf("O dia e o mes nao sao compativeis");
    } else if (ano < 0 || ano > 2023) {
      printf("O ano eh invalido ou ainda nao chegou");
    } else {
      printf("Data valida!");
    }
  }
}
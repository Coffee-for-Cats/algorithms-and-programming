#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
  float salario, gastos;

  printf(" Quanto eh o salario? ");
  scanf("%f", &salario);

  printf("\n Quanto sao os gastos? ");
  scanf("%f", &gastos);

  if (salario < 0 || gastos < 0) {
    printf("\n Nem o salario nem os gastos podem ser negativo!");
  } else {
    if (gastos > salario) {
      printf("\n Orcamento estourado!");
    } else {
      printf("\n Dentro do orcamento!");
    }
  }
}
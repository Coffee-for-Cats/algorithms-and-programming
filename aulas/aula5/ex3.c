#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
  int formaDePagamento;
  float valor;

  printf("Forma de pagamento: \n");
  printf("1 -> a vista;\n2 -> a prazo; \n");
  scanf("%d", &formaDePagamento);

  printf("Digite o valor do produto: ");
  scanf("%f", &valor);

  switch (formaDePagamento) {
  case 1:
    printf("O valor a pagar eh: %.2f", valor * .9);
    break;
  case 2:
    printf("O valor a pagar eh: %.2f", valor);
    break;
  default:
    printf("Forma de pagamento nao existente!");
  }
}
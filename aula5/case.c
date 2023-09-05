#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
  int operation, n1, n2;

  printf(" Qual operacao voce gostaria de realizar?");
  printf("\n 1 = soma; 2 = subtracao; 3 = divisao; 4 = multiplicacao; \n");
  scanf("%d", &operation);

  switch (operation) {
    case 1:
      printf("Soma: %d", n1 + n2);
      break;
    case 2:
      printf("Subtracao: %d", n1 - n2);
      break;
    case 3:
      printf("Divisao: %f", (float)n1 / (float)n2);
      break;
    case 4:
      printf("Multiplicacao: %d", n1 * n2);
      break;
    default:
      printf("Operacao incorreta!");
}
}
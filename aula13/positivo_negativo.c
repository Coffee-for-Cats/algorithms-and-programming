#include <stdio.h>
#include <stdlib.h>

int positivoNegativo(int x) {
  if (x > 0) {
    return 1;
  } else if (x < 0) {
    return -1;
  } else {
    return 0;
  }
}

int main() {
  int num;
  printf("Digite um numero: ");
  scanf("%d", &num);

  printf("O retorno da funcao eh: %d", positivoNegativo(num));
}
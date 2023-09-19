#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
  int maior;
  int menor;
  int num;

  printf("Digite um valor: ");
  scanf("%d", &num);
  maior = num;
  menor = num;

  for (int i = 0; i < 19; i++) {
    printf("Digite um valor: ");
    scanf("%d", &num);

    if (num > maior) maior = num;
    if (num < menor) menor = num;
  }

  printf("O maior numero eh %d. O menor numero eh %d.", maior, menor);
}
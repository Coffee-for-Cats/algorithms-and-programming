#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
  int input, maior, menor;
  int vet[10];

  printf("\n Digite um valor inteiro: ");
  scanf("%d", &input);
  vet[0] = input;
  maior = input; menor = input;

  for (int i = 1; i < 10; i++) {
    printf("\n Digite um valor inteiro: ");
    scanf("%d", &input);
    vet[i] = input;

    if (input > maior) maior = input;
    if (input < menor) menor = input;
  }

  printf("\n Maior: %d", maior);
  printf("\n Menor: %d", menor);
}
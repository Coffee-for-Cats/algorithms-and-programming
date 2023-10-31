#define _CRT_SECURE_NO_WARNINGS
#define tam 3

#include <stdio.h>

int main() {
  int vet[tam];
  int vet1next = 0;

  for (int i = 0; i < tam; i++) {
    int input = 0;

    while (input <= 10) {
      printf("Digite um numero inteiro maior do que 10!");
      scanf("%d", &input);
      vet1next++;
    }

    vet[i] = input;
  }

  int vet2[vet1next];
  int vet2next = 0;

  printf("O vetor 1 eh: [");
  for (int i = 0; i < tam; i++) {
    printf("%d, ", vet[i]);

    if (vet[i] % 2 == 1) {
      vet2[i] = vet[vet2next++];
    }
  }
  printf("] \n");

  printf("O segundo vetor eh: [");
  for (int i = 0; i < vet2next; i++) {
    printf("%d, ", vet2[i]);
  }
  printf("] \n");
}
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
  int tam = 11;

  int half = tam / 2 - 1;

  // printa uma piramide de cabeça para cima.
  for (int i = 0; i <= half; i++) {
    // printa os espaços.
    int spaces = half - i;
    for (int j = 1; j <= spaces; j++) {
      printf("  ");
    }

    // printa i * 2 + 1 quatidade de blocos
    int blocks = i * 2 + 1;
    for (int j = 1; j <= blocks; j++) {
      printf("O ");
    }
    printf("\n");
  }

  // printa uma piramide de cabeça para baixo.
  for (int i = half; i > 0; i--) {

    int spaces = (half)-i + 1;
    // printa 10 - i espaços.
    for (int j = 0; j < spaces; j++) {
      printf("  ");
    }

    // printa i * 2 + 1;
    int blocks = i * 2;
    for (int j = 1; j < blocks; j++) {
      printf("O ");
    }
    
    printf("\n");
  }
}
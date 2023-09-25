#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
  int n1 = -1;
  while (n1 < 1) {
    printf("Digite um numero maior que 1: ");
    scanf("%d", &n1);
  }
}
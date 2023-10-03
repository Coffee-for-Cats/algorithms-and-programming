#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
  int soma = 0;
  for (int i = 0; i < 10; i++) {
    int num; 
    printf("Digite o %dth numero : ", i + 1);
    scanf("%d", &num);
    if (num % 2 != 0 && num > 100 && num < 200) {
      soma += num;
    }
  }

  printf("Soma dos numeros impares: %d", soma);
}
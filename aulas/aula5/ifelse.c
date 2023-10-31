#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 1 = soma; 2 = subtração; 3 = divisão; 4 = multiplicação;
// calculadora

int main() {
  int operation, n1, n2;
  float result;

  printf(" Qual operacao voce gostaria de realizar?");
  printf("\n 1 = soma; 2 = subtracao; 3 = divisao; 4 = multiplicacao; \n");
  scanf("%d", &operation);

  if (operation >= 1 && operation <= 4) {
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if ((n1 > 10 && n1 < 35) || (n2 > 10 && n2 < 35)) {

      if (operation == 1)
        result = n1 + n2;
      if (operation == 2)
        result = n1 - n2;
      if (operation == 3)
        result = (float) n1 / (float) n2;
      if (operation == 4)
        result = n1 * n2;

      printf("\n O resultado da operacao eh: %.2f", result);
    } else {
      printf("Voce digitou algum valor invalido!");
    }
  } else {
    printf("Essa operacao nao existe! ");
  }
}
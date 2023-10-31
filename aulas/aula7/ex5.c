#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main() {
  float num = 0;
  int continuar = 1;
  printf("Digite o numero da qual voce deseja saber a raiz quadrada: ");
  scanf("%f", &num);

  float aprox = num / 2;

  while (continuar == 1) {
    float proximaIter = aprox - ((pow(aprox, 2) - num) / (2 * aprox));

    if (fabs(proximaIter - aprox) < .01) {
      continuar = 0;
    }
    aprox = proximaIter;
  }

  printf("%.8f eh a aproximacao calculada \n", aprox);
  printf("%.8f eh o valor esperado \n", sqrt(num));
}
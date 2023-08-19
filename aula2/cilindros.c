#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double altura, raio;

int main() {
  printf("Digite a altura do cilindro: \n");
  scanf("%lf", &altura);
  printf("Digite o raio do cilindro: \n");
  scanf("%lf", &raio);

  double area = pow((3.14 * raio), 2) + (2 * (3.14 * raio * altura));
  printf("A area do cilindro eh: %.2lf \n", area);
  double paintLitters = area / 3;
  double paintTins = ceil(paintLitters / 5);
  double valueSpent = paintTins * 20;
  printf(//"Voce vai precisar de %.2lf litros de tinta \n"
         "Vai precisar comprar %.0lf latas\n"
         "Que custam %.2lf reais \n",
         /*paintLitters,*/ paintTins, valueSpent);
  system("pause");
}
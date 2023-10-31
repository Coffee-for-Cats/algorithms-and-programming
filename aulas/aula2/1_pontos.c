#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  double p1x, p1y, p2x, p2y;

  printf("Digite as posicoes do ponto 1 (de enter entre elas): \n");
  scanf("%lf %lf", &p1x, &p1y);
  printf("Digite as posicoes do ponto 2 (de enter entre elas): \n");
  scanf("%lf %lf", &p2x, &p2y);

  double xDistance = p2x - p1x;
  double yDistance = p2y - p2y;
  double squaredXDistance = pow(xDistance, 2);
  double squaredYDistance = pow(yDistance, 2);
  double distance = sqrt(squaredXDistance + squaredYDistance);

  printf("A distancia entre os pontos eh %lf", distance);
}
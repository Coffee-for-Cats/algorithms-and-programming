#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float distancia(float x1, float y1, float x2, float y2) {
  float distX = abs(x1 - x2);
  float distY = abs(y1 - y2);

  return sqrt(distX * distX + distY * distY);
}

int main() {
  float x1, y1, x2, y2;
  printf("Digite a coordenada x do ponto 1: ");
  scanf("%f", &x1);

  printf("\nDigite a coordenada y do ponto 1: ");
  scanf("%f", &y1);

  printf("\nDigite a coordenada x do ponto 2: ");
  scanf("%f", &x2);

  printf("\nDigite a coordenada y do ponto 2: ");
  scanf("%f", &y2);

  printf("\nDistancia entre eles: %.4f", distancia(x1, y1, x2, y2));
}
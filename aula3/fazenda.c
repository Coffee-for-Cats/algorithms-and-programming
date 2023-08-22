#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int limoeiros, goiabeiras;
  printf("Quantos limoeiros voce possui na sua fazenda? \n");
  scanf("%d", &limoeiros);
  printf("Quantas goiabeiras voce possui na sua fazenda? \n");
  scanf("%d", &goiabeiras);

  printf("Voce vai precisar de %d litros de agua.", (limoeiros * 2) + (goiabeiras * 3));
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
  float cDiscount1 = 0.1;
  float cDiscount2 = 0.05;

  int clientType;
  float purchaseValue;

  printf("Digite o valor total da compra: ");
  scanf("%f", &purchaseValue);

  if (purchaseValue < 0) {
    printf("O valor da compra nao pode ser menor que 0");
    return 0;
  }
  
  printf("Digite 1 para funcionario, 2 para cliente vip e 3 para convencional: ");
  scanf("%d", &clientType);

  if (clientType < 0 || clientType > 3) {
    printf("Tipo de cliente invalido");
    return 0;
  }

  switch (clientType) {
    case 1:
      purchaseValue = purchaseValue * (1 - cDiscount1);
      break;
    case 2:
      purchaseValue = purchaseValue * (1 - cDiscount2);
      break;
    }

    printf("O valor total a ser pago eh %.2f", purchaseValue);
}
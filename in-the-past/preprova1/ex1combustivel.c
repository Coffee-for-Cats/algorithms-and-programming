#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
  float litros, precoLitro, desconto, precoLitroDesconto, valorTotal;
  int combustivel;
  int error = 0;

  printf(" Escolha:");
  printf("\n 1 -> Alcool");
  printf("\n 2 -> Gasolina \n");
  scanf("%d", &combustivel);

  printf("\nQuantos litros de combustivel voce vai comprar? ");
  scanf("%f", &litros);
  if (litros <= 0) {
    error = 1;
    printf("\nA quantidade de litros nao pode ser 0 ou negativa!");
  }

  printf("\nQual o preco do litro de combustivel? ");
  scanf("%f", &precoLitro);
  if (precoLitro <= 0) {
    error = 1;
    printf("\nO preco nao pode ser 0 ou negativo!");
  }

  switch (combustivel) {
  case 1:
    if (litros >= 10 && litros < 20) {
      desconto = 3;
    } else if (litros >= 20) {
      desconto = 5;
    }
    break;
  case 2:
    if (litros >= 20 && litros < 30) {
      desconto = 7;
    } else if (litros >= 30) {
      desconto = 8;
    }
    break;
  default:
    error = 1;
    printf("\nTipo de combustivel incorreto!");
  }

  if (error == 0) {
    printf("\n Quantidade de litros do abastecimento: %.2f", litros);
    printf("\n valor do litro sem desconto: %.2f", precoLitro);
    printf("\n valor do desconto por litro: %.2f por cento / R$%.2f por litro", desconto, (desconto / 100 * precoLitro));
    precoLitroDesconto = precoLitro * (100 - desconto) / 100;
    printf("\n valor do litro com desconto: %.2f", precoLitroDesconto);
    printf("\n valor total da nota a ser paga pelo cliente: %.2f", precoLitroDesconto * litros);
  }
}
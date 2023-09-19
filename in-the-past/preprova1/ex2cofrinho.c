#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
  int moedas, maisCaro;
  float valorEconomizado = 0;
  float precoPresente;

  printf("\nDigite quantas moedas ha no cofrinho de R$0,05: ");
  scanf("%d", &moedas);
  if (moedas < 0) {
    printf("\nA quantidade de moedas nao pode ser negativa!");
  } else {
    valorEconomizado += moedas * 0.05;
  }

  printf("\nDigite quantas moedas ha no cofrinho de R$0,10: ");
  scanf("%d", &moedas);
  if (moedas < 0) {
    printf("\nA quantidade de moedas nao pode ser negativa!");
  } else {
    valorEconomizado += moedas * 0.10;
  }

  printf("\nDigite quantas moedas ha no cofrinho de R$0,25: ");
  scanf("%d", &moedas);
  if (moedas < 0) {
    printf("\nA quantidade de moedas nao pode ser negativa!");
  } else {
    valorEconomizado += moedas * 0.25;
  }

  printf("\nDigite quantas moedas ah no cofrinho de R$0,50: ");
  scanf("%d", &moedas);
  if (moedas < 0) {
    printf("\nA quantidade de moedas nao pode ser negativa!");
  } else {
    valorEconomizado += moedas * 0.5;
  }

  printf("\nDigite quantas moedas ah no cofrinho de R$1,00: ");
  scanf("%d", &moedas);
  if (moedas < 0) {
    printf("\nA quantidade de moedas nao pode ser negativa!");
  } else {
    valorEconomizado += moedas;
  }

  printf("\nO presente pode ser de ate %.2f reais", valorEconomizado);
  printf("\nGostaria de comprar algo mais caro? 1 para Sim e 2 para nao: ");
  scanf("%d", &maisCaro);
  switch (maisCaro) {
  case 1:
    printf("\nDigite o valor do presente: ");
    scanf("%f", &precoPresente);
    if (precoPresente < 0) {
      printf("O preco do presente nao pode ser negativo!");
    } else {
      if (precoPresente > valorEconomizado) {
        printf("Voce vai precisar pedir %.2f para seu pai!",precoPresente - valorEconomizado);
      } else {
        printf("Voce ja tem o valor necessario!");
      }
    }
    break;
  case 2:
    break;
  default:
    printf("Opcao invalida! Tente novamente.");
  }
}
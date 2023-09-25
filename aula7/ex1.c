#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
  char continuar = 's';

  int vitorias = 0, derrotas = 0, empates = 0, gols_efetuados = 0,
      gols_sofridos = 0, expulsoes = 0;
  int maior_vit = 0, maior_der = 0, saldo_gol_total = 0, num_times_3_cartoes_vermelhos = 0;
  int count = 0;

  while (continuar == 's') {
    printf("\nQuantas vitorias teve o time? ");
    scanf("%d", &vitorias);
    if (vitorias > maior_vit) maior_vit = vitorias;

    printf("\nQuantas derrotas teve o time? ");
    scanf("%d", &derrotas);
    if (derrotas > maior_der) maior_der = derrotas;

    printf("\nQuantos empates teve o time? ");
    scanf("%d", &empates);

    printf("\nQuantos gols efetuados teve o time? ");
    scanf("%d", &gols_efetuados);

    printf("\nQuantos gols sofridos teve o time? ");
    scanf("%d", &gols_sofridos);

    saldo_gol_total += gols_efetuados - gols_sofridos;

    printf("\nQuantas expulsoes teve o time? ");
    scanf("%d", &expulsoes);

    if (expulsoes >= 3) {
      num_times_3_cartoes_vermelhos++;
    }

    count++;
    printf("\n\nDeseja dar as informacoes de mais um time? ");
    scanf(" %c", &continuar);
  }

  printf("\nMaior numero de vitorias: %d", maior_vit);
  printf("\nMaior numero de derrotas: %d", maior_der);
  printf("\nSaldo medio de gols feitos e tomados: %.2f",
         (float)saldo_gol_total / (float)count);
  printf("\nPorcentagem de times com mais de 3 cartoes vermelhos: %.2f",
         (float)num_times_3_cartoes_vermelhos * 100.0 / (float)count);
}
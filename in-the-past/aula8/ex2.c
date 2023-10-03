#define _CRT_SECURE_NO_WARNINGS

#define rebanho 2
#include <stdio.h>

int main() {
  int pesoCabras1[rebanho];
  int pesoCabras2[rebanho];
  int pesoCabras3[rebanho];

  for (int i = 0; i < rebanho; i++) {
    // teria que filtrar o input aqui.
    printf("\nDigite o peso da %d cabra no primeiro mes: ", i + 1);
    scanf("%d", &pesoCabras1[i]);
  }

  for (int i = 0; i < rebanho; i++) {
    // teria que filtrar o input aqui também.
    printf("\nDigite o peso da %d cabra no segundo mes: ", i + 1);
    scanf("%d", &pesoCabras2[i]);
  }

  for (int i = 0; i < rebanho; i++) {
    // teria que filtrar o input aqui também 2.
    printf("\nDigite o peso da %d cabra no terceiro mes: ", i + 1);
    scanf("%d", &pesoCabras3[i]);
  }

  int maior = pesoCabras1[0];
  int menor = pesoCabras1[0];

  for (int i = 0; i < rebanho; i++) {
    int mudancaPeso1 = pesoCabras1[i] - pesoCabras2[i];
    int mudancaPeso2 = pesoCabras2[i] - pesoCabras3[i];

    printf("\nA cabra n %d teve uma mudanca de peso de %dkg do primeiro para o "
           "segundo mes.",
           i + 1, mudancaPeso1);
    printf("\nA cabra n %d teve uma mudanca de peso de %dkg do segundo para o "
           "terceiro mes.",
           i + 1, mudancaPeso2);

    int pesoMes1 = pesoCabras1[i];
    int pesoMes2 = pesoCabras2[i];
    int pesoMes3 = pesoCabras3[i];

    // Qual o maior peso da cabra?
    if (pesoMes1 > pesoMes2) {
      if (pesoMes1 > pesoMes3) {
        printf("\nO maior peso da cabra %d foi no mes 1", i);
      } else {
        printf("\nO maior peso da cabra %d foi no mes 3", i);
      }
    } else if (pesoMes2 > pesoMes3) {
      printf("\nO maior peso da cabra %d foi no mes 2", i);
    } else {
      printf("\nO maior peso da cabra %d foi no mes 3", i);
    }
  }

  int somaPesoTotal1 = 0;
  int somaPesoTotal2 = 0;
  int somaPesoTotal3 = 0;
  for (int i = 0; i < rebanho; i++) {
    somaPesoTotal1 += pesoCabras1[i];
    somaPesoTotal2 += pesoCabras2[i];
    somaPesoTotal3 += pesoCabras3[i];
  }

  printf("\nO peso total no mes 1 foi: %d", somaPesoTotal1);
  printf("\nO peso total no mes 2 foi: %d", somaPesoTotal2);
  printf("\nO peso total no mes 3 foi: %d", somaPesoTotal3);

  int mudancaTotal1 = somaPesoTotal1 - somaPesoTotal2;
  int mudancaTotal2 = somaPesoTotal2 - somaPesoTotal3;

  printf("\nA mudanca do total de peso do mes 1 para o mes 2 foi de %d",
         mudancaTotal1);

  printf("\nA mudança do total de peso do mes 2 para o mes 3 foi de %d",
         mudancaTotal2);
}
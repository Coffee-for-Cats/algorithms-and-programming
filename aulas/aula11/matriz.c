#include <stdio.h>

#define n_pac 2

int main() {
  // informações | pacientes
  float pacientes[n_pac][3];
  // i = paciente, j = informação:
  // j:0 -> peso;
  // j:1 -> altura;
  // j:2 -> IMC;

  for (int i = 0; i < n_pac; i++) {
    int j = 0;
    printf("Digite o peso do paciente %d: ", i);
    scanf("%f", &pacientes[i][j]);

    j++;
    printf("Digite a altura do paciente: ");
    scanf("%f", &pacientes[i][j]);

    // calcula o IMC e salva na coluna 2.
    float imc = (float) pacientes[i][0] / (float) (pacientes[i][1] * pacientes[i][1]);

    pacientes[i][2] = imc;
  }

  for (int i = 0; i < n_pac; i++) {
    printf("\nO mmc do paciente %d eh: %f", i, pacientes[2][i]);
  }
}
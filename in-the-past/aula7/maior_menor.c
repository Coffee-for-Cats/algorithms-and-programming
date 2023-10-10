#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
  int continuar = 1;
  float nota1, nota2, nota3;
  // maior e menor notas de cada exercício ao longo de todos os alunos.
  float maiorEx1 = 0, menorEx1 = 0, maiorEx2 = 0, menorEx2 = 0, maiorEx3 = 0, menorEx3 = 0;
  float maiorMedia = 0;
  float menorMedia = 0;

  // pedir as 3 notas para iniciar as variaveis

  printf("Digite a 1 nota do aluno: ");
  scanf("%f", &nota1);
  maiorEx1 = nota1; menorEx1 = nota1;
  
  printf("Digite a 2 nota do aluno: ");
  scanf("%f", &nota2);
  maiorEx2 = nota2; menorEx2 = nota2;

  printf("Digite a 3 nota do aluno: ");
  scanf("%f", &nota3);
  maiorEx3 = nota3; menorEx3 = nota3;

  maiorMedia = (nota1 + nota2 + nota3) / 3.00;
  menorMedia = (nota1 + nota2 + nota3) / 3.00;

  while (continuar == 1) {
    printf("\nDeseja inserir a nota de mais um aluno? 1 -> (sim | 0 -> nao) \n");
    scanf("%d", &continuar);

    if (continuar == 1) {

      printf("Digite a 1 nota do aluno: ");
      scanf("%f", &nota1);

      printf("Digite a 2 nota do aluno: ");
      scanf("%f", &nota2);

      printf("Digite a 3 nota do aluno: ");
      scanf("%f", &nota3);

      if (nota1 > maiorEx1) maiorEx1 = nota1;
      if (nota2 > maiorEx2) maiorEx2 = nota2;
      if (nota3 > maiorEx3) maiorEx3 = nota3;

      if (nota1 < menorEx1) menorEx1 = nota1;
      if (nota2 < menorEx2) menorEx2 = nota2;
      if (nota3 < menorEx3) menorEx3 = nota3;

      float media = (nota1 + nota2 + nota3) / 3.00;
      if(media > maiorMedia) maiorMedia = media;
      if (media < menorMedia) menorMedia = media;
    }
  }

  printf("\nAs maiores notas dos exercicios 1, 2 e 3: %.2f %.2f %.2f", maiorEx1, maiorEx2, maiorEx3);
  printf("\nAs menores notas dos exercicios 1, 2 e 3: %.2f %.2f %.2f", menorEx1, menorEx2, menorEx3);

  printf("\nA maior media foi %.2f", maiorMedia);
  printf("\nA menor media foi %.2f", menorMedia);
}
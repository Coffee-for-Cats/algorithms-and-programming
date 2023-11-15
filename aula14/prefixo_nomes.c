// Elabore um programa que leia o nome de um professor (a), o sexo (F ou M) e a titulação (1 doutorado ou 2 mestrado). O nome pode ter até 20 caracteres. Depois de ler separadamente cada informação, escreva o nome  do professor(a) com a complementação da sua titulação da seguinte forma: Dr (para professores), Dra (para professoras), Me (para professores) e Ma (para professoras).

// Faça as consistências necessárias para que o programa funcione corretamente, no caso de sexo (M ou F) e titulação (1 ou 2).

// A idendação do código é obrigatória, assim como o uso adequado de nomes de variáveis e funções.

#include <stdio.h>

int getInput(char text[]) {
  int input = -1;
  do {
    printf(text);
    scanf("%d", &input);
  } while (input != 1 && input != 2);
  return input;
}

int main() {
  char nome[20];
  char sexo;
  int titulacao;

  printf("Digite o nome do professor: ");
  gets(nome);

  sexo = getInput("Digite o sexo do professor (1 -> feminino, 2 -> masculino)");

  titulacao = getInput("Digite a titulacao do professor (1 -> doutorado, 2 -> mestrado)");

  printf("O titulo do professor eh: \n");

  if (titulacao == 1) {
    printf("Dr");
  } else {
    printf("M");
  }

  if(sexo == 1) {
    // se for feminino, 'Dr'/'M' + 'a' = Dra ou Ma.
    printf("a");
  } else if (titulacao == 2) {
    // se for masculino E mestrado, 'Me'.
    printf("e");
  }

  printf(" ");
  puts(nome);
}
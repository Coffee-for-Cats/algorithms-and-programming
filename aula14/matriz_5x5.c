// Elabore um programa que manipule com uma matriz 5X5 de inteiros, a qual será preenchida com valores lidos pelo teclado. Os valores devem ser maiores que 10 e pares. Depois de toda preenchida a matriz imprima ela (como foi preenchida pelo teclado) e depois troque os valores que estão na diagonal principal pelos valores que estão na diagonal secundária, assim a diagonal principal ficará idêncida à diagonal secundária e, no final do processo,  imprima a matriz modificada.

// Manipulando com a matriz modificada crie um vetor com os valores armazenados na matriz que sejam maiores que 40. Após a vriação do vetor imprima ele de traz para frente.

#include <stdio.h>

#define size 5

// se tu quiser testar mais fácil, da pra só substituir
// a chamada de "input(i, j)" na main por "justFill()";
int justFill(int i, int j) {
  static int count = 10;
  return count++;
}

int input(int i, int j) {
  //static int count = 10;
  int input;
  do {
    printf("[%d][%d]: ", i, j);
    scanf("%d", &input);
  } while (input < 10 || input % 2 == 1);
  return input;
}

int main() {
  int matriz[size][size];

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      // da pra substituir input por justFill() para testar.
      matriz[i][j] = input(i, j);
    }
  }

  // acho que só fazendo os loops de novo mesmo...
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("%d ", matriz[i][j]);

      if (i == j) { // ou seja, se estou na diagonal principal.
        // -1 pois indices começam em 0.
        // -i pois "começo no fim" e ando "i" para a esquerda.
        matriz[i][j] = matriz[i][size -i -1];
      }
    }
    // pra ficar bonitinho =)
    printf("\n");
  }

  // só para separar os outputs.
  printf("\n");

  // // da pra fazer aqui fora também:
  // for (int i = 0; i < size; i++) {
  //   // -1 por que o índice começa em 0.
  //   // coluna_diag_secnd = size -i -1;
  //   matriz[i][i] = matriz[i][size - i - 1];
  // }

  // agora preciso printar de novo a matriz...
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}
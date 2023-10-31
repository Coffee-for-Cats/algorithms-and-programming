#include <stdio.h>

int imprime_ast(int qtd)
{
  for (int i = 0; i < qtd; i++) {
    printf("* ");
  }
  printf("\n");
}

int main() {
  imprime_ast(4);
  imprime_ast(3);
  imprime_ast(2);
  imprime_ast(1);
}
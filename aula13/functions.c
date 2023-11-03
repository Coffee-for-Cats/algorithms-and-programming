#include <stdio.h>

int soma(int a, int b)
{
  int soma = a + b;
}

int main()
{
  int minhaSoma = soma(4, 3);
  // variável soma não existe aqui.
  printf("%d", minhaSoma);
}
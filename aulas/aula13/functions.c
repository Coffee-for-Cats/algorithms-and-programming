#include <stdio.h>

int soma(int a, int b)
{
  int y = a + b;

  return y;
}

int main()
{
  // a função soma, vai retornar 7;
  // esse 7 vai parar dentro da variável minhaSoma;
  int minhaSoma = soma(4, 3);
  // variável soma não existe aqui.

  // posso fazer oque eu quiser com o valor;
  printf("%d", minhaSoma);
}
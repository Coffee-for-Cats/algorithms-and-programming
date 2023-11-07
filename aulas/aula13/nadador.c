#include <stdio.h>

char* categoria(int idade) {
  if(idade >= 5 && idade <= 7) {
    return "Intantil A";
  }
}

int main() {
  int anos = 6;
  printf("%s", categoria(anos));
}
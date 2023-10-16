#include <stdio.h>
int main() {
  for (int i = 1; i < 11; i++) {
    for (int space = 10 - i; space > 0; space--) {
      printf(" ");
    }

    for (int j = 0; j < i; j++) {
      printf("O");
    }

    printf("\n");
  }
}
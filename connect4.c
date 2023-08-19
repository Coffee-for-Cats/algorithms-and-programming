#define _CRT_SECURE_NO_WARNINGS
//#include <vcruntime.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// map line - column
char map[10][10];
char player = 'x';

int showMap() {
  printf("1 2 3 4 5 6 7 8 9 10\n");

  for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10; j++) {
      // if there is nothing, prints a space to keep the spacing of the grid.
      if(!map[i][j]) printf(" ");
      // actually prints the char on the map.
      printf("%c ", map[i][j]);
    }
    printf("\n");
  }
  return 0;
}

int main() {
  while(1) {
    printf("Escolha a coluna que voce deseja posicionar o %c!\n", player);
    showMap();
    int columnChossen;
    scanf("%d", &columnChossen);

    // places the X
    for (int i = 10; i >= 0; i--) {
      if (!map[i][columnChossen]) {
        // it couldn't be "x"!
        map[i][columnChossen] = player;
        break;
      };
    }
    //changes the player
    if (player == 'x') player = 'o'; else player = 'x';
  }
}
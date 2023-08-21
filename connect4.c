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

int askForColumn() {
  int columnChossen;
  while (1) {
    scanf("%d", &columnChossen);
    if (0 < columnChossen && columnChossen < 11) {
      break;
    } else
      printf("Numero invalido! \n");
  }
  return columnChossen;
}

int tryPutOnMap(int columnChossen, char player) {
  // iterates over the column
  for (int i = 10; i >= 0; i--) {
    //watcher for a blank place
    if (!map[i][columnChossen]) {
      // placer the player's char there
      map[i][columnChossen] = player;
      return i;
    };
  }
  // if no place is found in the column
  return -1;
}

int sameCharSequence(int x, int y, int stepJumpX, int stepJumpY, int counter) {
  char atual = map[x][y];
  if (atual != player) {
    return counter;
  } else {
    return sameCharSequence(x + stepJumpX, y + stepJumpY, stepJumpX, stepJumpY, counter + 1);
  }
}

int main() {
  while(1) {
    // gets the column from user input
    printf("Escolha a coluna que voce deseja posicionar o %c!\n", player);
    showMap();

    // asks for the column from user input, and tries putting on the map
    // if it doesn't work, tries again
    // height is -1 till the char is placed on the map
    int height = -1;
    int columnChossen;
    while (height < 0) {  
      columnChossen = askForColumn();
      height = tryPutOnMap(columnChossen, player);
      if (height < 0) printf("Esta coluna ja esta cheia, escolha outra. \n");
      // to do: map full
    }
    // changes the player's char each round
    if (player == 'x') {
      player = 'o';
    } else {
      player = 'x';
    }

    // checks if the player did win
    int sideCharSequence = sameCharSequence(height, columnChossen, 1, 0, 0);
    printf("%d", sideCharSequence);
  }
}
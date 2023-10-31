#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// structure of the dictionary.
typedef struct Node {
  struct Node *point;
  char character;
  struct Node *dash;
} Node;

// returns a new empty dictionary.
Node *newDictionary() {
  // the parameter is a pointer to a pointer to the dictionary.
  // here I create the dictionary and assign its pointer in the middle of them.
  Node *temp = malloc(sizeof(Node));
  if(temp) {
    temp->point = NULL;
    temp->dash = NULL;
    // acesses the pointer passed, and change the pointer to the node.
    // so now the node is the temp I created.
  } else { printf("Error: memory.\n"); }

  return temp;
}

// add to a dictioary, a character at the path of code.
void addToDictionary(Node *dictionary, char code[], char character) {
  // printf("Code: %s\n", code);

  // printf("Iterating!\n");
  switch (code[0]) {
    case '.': {
      // printf("\nPoint found");
      if(dictionary->point == NULL) {
        Node *tempNode = newDictionary();
        dictionary->point = tempNode;
      }
      // Todo: remove first element of code.
      code++;
      addToDictionary(dictionary->point, code, character);
      break;
    }
    case '-': {
      // printf("\nDash found");
      if(dictionary->dash == NULL) {
        Node *tempNode = newDictionary();
        dictionary->dash = tempNode;
      }
      // Todo: remove first element of code.
      code++;
      addToDictionary(dictionary->dash, code, character);
      break;
    }
    case '\0': {
      dictionary->character = character;
      printf("Addded %c!\n", dictionary->character);
      break;
    }
    default: {
      printf("Error in the Code string argument!");
      // end of list. The node already exist because of the anterior code.
    }
  }
}

int search(char *dest, Node *dictionary, char code[]) {
  if (dictionary == NULL) {
    return 0;
  }
  switch(code[0]) {
    case '.': {
      code++;
      return search(dest, dictionary->point, code);
    }
    break;
    case '-': {
      code++;
      return search(dest, dictionary->dash, code);
    }
    break;
    case '\0': {
      *dest = dictionary->character;
      return 1;
    }
    default: {
      printf("Error! Invalid searching code string.\n");
    }
  }
}

// frees the etire tree from the node. Has to be called in the end of program.
void freeTree(Node *node) {
  if(node->point) {
    freeTree(node->point);
  }
  if (node->dash) {
    freeTree(node->dash);
  }
  free(node);
}

// file handling
typedef struct {
  char *code;
  char *character;
} Pair;
// separates a string with ',' into struct { code & character }.
Pair separate(char line[]) {
  Pair pair;
  char *separator = ",";

  pair.code = strtok(line, separator);
  pair.character = strtok(NULL, separator);

  return pair;
}

int main() {
  FILE *dictionaryFile = fopen("dictionary.csv", "r");
  Node *dictionary = newDictionary();

  // adds every term in the dictionary to the btree.
  char line[100];
  while(fgets(line, 100, dictionaryFile)) {
    Pair pair = separate(line);
    addToDictionary(dictionary, pair.code, pair.character[0]);
  }

  fclose(dictionaryFile);

  char code[100];
  code[0] = '0'; // just to erase memory trash
  while(code[0] != 'e') {
    printf("Write the morse code of a character in dictionary (write 'e' to exit): \n");
    scanf("%s", &code);
    if (code[0] != 'e') {
      char dest;
      int success = search(&dest, dictionary, code);
      if (success == 1) {
        printf("Character: %c\n", dest);
      } else {
        printf("Character not found!\n");
      }
    }
  }

  freeTree(dictionary);
}
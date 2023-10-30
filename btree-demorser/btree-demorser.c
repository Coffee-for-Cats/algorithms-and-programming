#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// node of the dictionary
typedef struct Node {
  struct Node *point;
  char character;
  struct Node *dash;
} Node;

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

void freeTree(Node *node) {
  if(node->point) {
    freeTree(node->point);
  }
  if (node->dash) {
    freeTree(node->dash);
  }
  free(node);
}

typedef struct {
  char *code;
  char *character;
} Pair;

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

  printf("%c\n", dictionary->point->character);
  printf("%c\n", dictionary->dash->character);

  freeTree(dictionary);
}
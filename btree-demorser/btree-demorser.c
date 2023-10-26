#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// node of the dictionary
typedef struct Node {
  struct Node *point;
  char character;
  struct Node *line;
} Node;

Node *newDictionary() {
  // the parameter is a pointer to a pointer to the dictionary.
  // here I create the dictionary and assign its pointer in the middle of them.
  Node *temp = malloc(sizeof(Node));
  if(temp) {
    temp->point = NULL;
    temp->line = NULL;
    // acesses the pointer passed, and change the pointer to the node.
    // so now the node is the temp I created.
  } else { printf("Error: memory.\n"); }

  return temp;
}

void addToDictionary(Node *dictionary, char code[], char character) {
  printf("Code: %s\n", code);

  printf("Iterating!\n");
  switch (code[0]) {
    case '.': {
      printf("\nPoint found");
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
      printf("\nLine found");
      if(dictionary->point == NULL) {
        Node *tempNode = newDictionary();
        dictionary->line = tempNode;
      }
      // Todo: remove first element of code.
      code++;
      addToDictionary(dictionary->point, code, character);
      break;
    }
    case '\0': {
      printf("End of string reached!");
      dictionary->character = character;
      break;
    }
    default: {
      printf("Error in the Code string argument!");
      // end of list. The node already exist because of the anterior code.
    }
  }
}

int main() {
  Node *dictionary = newDictionary();
  addToDictionary(dictionary, ".", 'e');
  printf("\nChar: %c\n", dictionary->point->character);
}
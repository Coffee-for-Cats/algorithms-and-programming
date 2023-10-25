#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// node is a new type.
typedef struct Node {
  int number;
  struct Node* next;
} StructNode, *Node;

// function that creates a new node/linkedList from nothing.
Node newNode(int number)
{
  // crio um pointer vazio, com a estrutura do Node.
  Node temp;

  // dou um malloc.
  temp = (Node)malloc(
    // tamanho do meu nó da linked list.
    sizeof(Node));

  // o próximo item da linked list será NULL por enquanto.
  temp->next = NULL;
  // o número será o valor recebido pela função.
  temp->number = number;

  // retorno o pointer.
  return temp;
}

// a pointer to a function of type void
typedef void(*voidLambda)();
// an iteration function to execute a voidLambda function for each item in the linked list.
void Iterate(Node linkedList, voidLambda func)
{
  func(linkedList->number);

  if(linkedList->next != NULL) {
    Iterate(linkedList->next, func);
  }
}

// simple function
void myPrint(int num)
{
  printf("\n%d", num);
}

// array.push(array, num)
void pushInto(Node linkedList, int num)
{
  if(linkedList->next == NULL) {
    Node temp = newNode(num);
    linkedList->next = temp;
    //printf("\n temp number: %d \n", linkedList->next->number);
  } else {
    pushInto(linkedList->next, num);
  }
}

int deleteAtIndex(Node node, int index) {
  // the next pointer is the one to be deleted.
  if (node->next == NULL) {
    printf("\nThe end of the list reached before finding the index.");
    return 1;
  }
  if (index < 0) {
    printf("\nIts not possible to delete the %dth node of the list!");
    return 1;
  }

  Node nextPointer = node->next;
  Node nextNextPointer = nextPointer->next;

  // I may want to delete the first element, but the list has many other.
  if (index == 0) {
    // I have to copy the next and put it in the actual.
    node->number = nextPointer->number;
    // and connect them.
    node->next = nextPointer->next;
    // frees the next, as its info are saved in the actual.
    free(nextPointer);
    return 0;
  }

  if (index == 1)
  {
    // I have to copy the next-next node,
    // Delete it. And then put it in this position.
    // this is because I may want to delete the first element in the list.

    // if the next pointer is the last...
    if (nextPointer == NULL) {
      free(nextPointer);
      node->next = NULL;
    } else {
      printf("\nDeleting %d", nextPointer->number);
      free(nextPointer);
      node->next = nextNextPointer;
    }
  }
  else
  {
    deleteAtIndex(node->next, index - 1);
  }
}

int main()
{
  Node linkedList = newNode(3);
  pushInto(linkedList, 4);
  pushInto(linkedList, 2);
  pushInto(linkedList, 7);
  // transforms myPrint into a "lamba function" and passes it as parameter to interate.
  deleteAtIndex(linkedList, 0);
  Iterate(linkedList, (voidLambda) &myPrint);

  //printf("\nCalled: %d", called);
}
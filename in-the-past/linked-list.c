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

typedef void(*voidLambda)();
void Iterate(Node linkedList, voidLambda func)
{
  func(linkedList->number);

  if(linkedList->next != NULL) {
    Iterate(linkedList->next, func);
  }
}

void myPrint(int num)
{
  printf("%d\n", num);
}

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

int main() {
  Node linkedList = newNode(2);
  pushInto(linkedList, 4);
  // transforms myPrint into a "lamba function" and passes it as parameter to interate.
  Iterate(linkedList, (voidLambda) &myPrint);

  //printf("\nCalled: %d", called);
}
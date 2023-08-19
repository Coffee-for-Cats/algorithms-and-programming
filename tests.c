#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int age;
double time;

int main() {
  printf("Hi, try writting something!\n");
  scanf("%d %lf", &age, &time);

  printf("%d, %lf", age, time);
  
  //system("pause");
}
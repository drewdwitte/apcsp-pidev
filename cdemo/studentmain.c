
#include <stdio.h>
#include "student.h"

int main() 
{
  char cont[50];

  int i = 0;
  int n = 0;

  struct Student myStudent[25];
  do {
    enterStudent(&myStudent[i]);
    i++;
    printf("Do you want to add another student (y/n)?");

    fgets(cont, 50, stdin);
  }  while (i < 25 && (cont[0] == 'y'));

  printf("\n");

  for (n = 0; n < i; n++)
    printStudent(&myStudent[n]);

}

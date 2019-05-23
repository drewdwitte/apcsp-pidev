#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);
  a=a+b;
  c=2;
  printf("Sum of %d and %d is %d\n", a, b, c);
}


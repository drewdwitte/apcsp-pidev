#include <stdio.h>

float areaofcircle
(float rad)
{
  printf ("radius: %f\n", rad);

  return (rad * rad *3.14);
}


int main() {
  float area;

  for (float i = 3.50; i <= 12.50; i=i+1)
  {
    area= areaofcircle (i);
    printf("area: %f\n", area);

  } 
}

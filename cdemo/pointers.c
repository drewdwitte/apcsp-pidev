#include <stdio.h>
int main()
{
int a;
int* ptrtoa;
ptrtoa = &a;
a = 5;

printf("The value of a is %d\n", a);

*ptrtoa = 6;

printf("The value of a is %d\n", a);

printf("The value of ptrtoa is %d\n", ptrtoa);

printf("It stores the value %d\n", *ptrtoa);

printf("The address of a is %d\n",&a);

float d= 8.6;

float* ptrtod;

ptrtod = &d;

printf("The value of d is %f.\n", d); 


printf("The address of d is %ld\n", ptrtod);

float e= 9.4;

float* ptrtoe;

ptrtoe= &e;

printf("The value of e is %f.\n", e);


printf("The address of e is %ld\n", ptrtoe);

float temp= *ptrtod;
*ptrtod = *ptrtoe;
*ptrtoe = temp;

printf("Now, the value of d is %f.\n", d); 


printf("Now, the address of d is %ld\n", ptrtod);

printf("Now, the value of e is %f.\n", e);


printf("Now, the address of e is %ld\n", ptrtoe);

}


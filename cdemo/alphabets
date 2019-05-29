#include <stdio.h>
#include <string.h>

int main(void) {
  char alpha[27];
  
  char a= 'a';

  for (int i =0;i < 26; i++)
  {
   alpha[i]=a;
   a++;
    ;
  }

alpha[26]=0;



char beta[]= "abcdefghijklmnopqrstuvwxyz";
printf("%s\n%s\n",alpha,beta);
 

if (strcmp(alpha, beta)==0)
{
  printf("These are the same\n");
}
else 
{
  printf("these are different\n");
}

for (int i=0; i<26; i++)
{
  beta[i]=a-58;
  a++; 
}

printf("%s\n%s\n",alpha,beta);
 

if (strcmp(alpha, beta)==0)
{
  printf("These are the same\n");
}
else 
{
  printf("these are different\n");
}

char alphabet [53];
strcpy (alphabet, alpha);
strcat(alphabet, beta);

printf("%s\n%s\n%s\n", alpha, beta, alphabet);
 return 0;
 }

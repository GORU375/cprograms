#include <stdio.h>

// prime factors of n

int main()

{
int n,i,j;
printf("Enter a number\n");
scanf("%d",&n);
for(i=2; n>1; i++)
{
  while(n%i==0)
    {
     printf("%d\t",i);
     n=n/i;
    }



}







}

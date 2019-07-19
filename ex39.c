#include <stdio.h>
#include <stdlib.h>
// print N co prime numbers
int main()
{
int n,min,b,i,a=2;
printf("Enter how many coprime numbers to print\n");
scanf("%d",&n);

while(1)
 {
  for(b=2; b<=a; b++)
   {
    min = a<b?a:b;
     for(i=2; i<=min; i++ )
     {
      if(a%i==0 && b%i==0)
       break;
     }
    if(i==min+1)
      {
      printf("(%d, %d)",a,b);
      n--;
      if(n==0)
	exit(0);
     
      }
   } 
  a++;

 }

}



#include <stdio.h>

// to check if a number is prime or not

int main()
 {
int n,i;
printf("Enter a number\n");
scanf("%d",&n);

if(n%2==0)
  printf("Not prime\n");

for (i=3; i<=n/2; i = i+2)
{
if (n%i==0)
  { printf("Not prime\n");
    break;
  }

 }



}

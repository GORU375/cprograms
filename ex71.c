// function to calculate factorial of a number // Take something return something
#include <stdio.h>
int factorial(int);
int main()
{
int n,f;
printf("Enter a number\n");
scanf("%d",&n);
f= factorial(n);
printf("The factorial is %d\n",f);
}

int factorial(int n)
 {
  int fact=1;
  for(int i = 1; i<=n; i++)
    {
     fact = fact * i;
    }

  return fact;







 }
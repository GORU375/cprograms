// print factorial of number using recursion
#include <stdio.h>
int factorial(int);

int main()
{
int n;
printf("Enter a number\n");
scanf("%d",&n);
printf("%d",factorial(n));

}
int factorial(int n)
{
    int fact;
    if (n==1)
      return 1;
    else
     fact = n * factorial(n-1);
    return fact;

}
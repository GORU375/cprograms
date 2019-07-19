// nth term of fibonacci sequence
#include<stdio.h>
int fibonacci(int);
int main()
{
int n, term;
printf("Enter the term\n");
scanf("%d",&n);
term = fibonacci(n);
printf("The term is %d\n",term);
}

int fibonacci(int n)
{
 if(n==1)
   return 0;
 
 else if (n==2)
    return 1;
else 
  return fibonacci(n-1) + fibonacci(n-2) ;
 
}

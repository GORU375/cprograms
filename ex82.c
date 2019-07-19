// fibonacci seqence using recursion

#include<stdio.h>
 
int Fibonacci(int);
 
int main()
{
   int n, c;
   printf("Enter number of terms");
   scanf("%d",&n);
   printf("Fibonacci series\n");
 
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(c));

   }
   return 0;
}
 
int Fibonacci(int n)
{
   if (n>=3)
      return Fibonacci(n-1) + Fibonacci(n-2);
   else if(n==2)
       return 1;
    else
    {
        return 0;
    }
      

}
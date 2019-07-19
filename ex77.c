// express given number a sum of two prime number
// i + (x-i) = x is given number where i and x-i is a prime number

#include <stdio.h>
int nextprime(int);
int isprime(int);
int main()
{
int n,i;
printf("Enter a number\n");
scanf("%d",&n);
for( i = 1; i<=(n-i); i = nextprime(i))
 {
    if( isprime(n-i) )
     {
        printf("%d + %d = %d\n",i,n-i,n);

     }
 }


}

int isprime(int n)
{
  int i;
 for( i = 2; i<n; i++)
  {
    if (n%i==0)
         {
             return 0;
             break;
         }
  }
  if(i==n)
    return 1;

}

int nextprime(int n)
{
  int next = n+1;
  while(!isprime(next))
   {
     next++;

   }
   return next;


}
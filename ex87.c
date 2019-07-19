// sum of square of digits of number
int sum(int n);
#include <stdio.h>
#include <math.h>
int main()
{
 int n;
 printf("Enter a number\n");
 scanf("%d",&n);
 printf("%d\n",sum(n));

}

int sum(int n)
{
 if(n%10==0)
   {
       return n;
   }
   else
   {
       return pow(n%10,2) + sum(n/10);
   }
   



}
// print sum of digits of a number using recursion
#include<stdio.h>
int sum(int);
int main()
{
 int n;
printf("Enter a number");
scanf("%d",&n);
printf("%d",sum(n));
}

int sum(int n)
{
  if(n%10==0)
      return n;
   else
   {
       return ((n%10) + sum(n/10)); 
   }
   
   

}
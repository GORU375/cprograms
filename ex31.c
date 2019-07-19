#include <stdio.h>
//sum of digits in a number
int main()
{

int n,r,sum=0;
printf("Enter a number\n");
scanf("%d", &n);
while(n!=0);
  {
   printf("checking");
   r= n%10;
   sum += r;
   n=n/10;
   }

printf("The sum of digits  is %d",sum);
return 0;










}

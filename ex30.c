#include <stdio.h>

// to find  number of digits in a number
int main()
{
int num,n, count=0;
printf("Enter a number\n");
scanf("%d",&num);
n = num;
while(n!=0)
   {
    n=n/10;
    count++;
   }

printf("The number of digits in %d is %d\n",num,count);
return 0;




}

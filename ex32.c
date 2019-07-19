#include <stdio.h>

// to reverse a number

int main()

{
int n, r, y=0;
printf("Enter a number\n");
scanf("%d",&n);
while(n!=0)
{
r = n%10;
y = y*10+r;
n = n/10;
}

printf("The reversed number is %d\n",y);
return 0;








}

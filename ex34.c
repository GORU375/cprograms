#include <stdio.h>
// find lcm of 2 numbers

int main()
{
int a,b,l;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
for (l=a>b?a:b; l<=a*b; l=l+(a>b?a:b))
   {
     if(l%a==0 && l%b==0)
        break;
   }
printf("The lcm is %d\n",l);
return 0;








}

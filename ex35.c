#include <stdio.h>

// to find hcf of 2 numbers

int main()

{
int a,b,h;
printf("Enter 2 numbers\n");
scanf("%d%d",&a,&b);
for(h=a<b?a:b; h>=1; h--)
   {
    if(a%h==0 && b%h==0)
      break;

    }

printf("The hcf is %d \n",h);

}

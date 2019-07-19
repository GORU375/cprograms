#include <stdio.h>

// to check if two numbers are co prime 

int main()
{
int n1, n2, f;
printf("Enter two numbers\n");
scanf("%d%d",&n1,&n2);
for(int i = (n1<n2?n1:n2); i>1; i--)
 {
   if(n1%i==0 && n2%i==0)
    {
     f=0;
     break;   
     }

 }

if(f==0)
  printf("Not co prime");
else
  printf("CO prime");



return 0;



}

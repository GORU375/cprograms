#include <stdio.h>

// to find prime numbers between given  range

int main()

{
int i,j,l,h;
printf("Enter 2 numbers\n");
scanf("%d%d",&l,&h);

 for(i=l;i<=h;i++)
 {
  for(j=3; j<=i/2;j=j+2)
   {  
     if(i%2==0)
       break;
     if(i%j==0)
        break;

   }

  if (j>i/2)
    printf("%d\n",i);



 }



}

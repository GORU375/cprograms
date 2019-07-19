#include <stdio.h>

// factorial of a given number

int main()

{
int num,fact=1;
printf("Enter a number \n");
scanf("%d",&num);
for(int i = num ; i>=1; i--)
  {
   fact = fact * i;

  } 
printf("The factorial of %d is %d",num,fact);

return 0;




}

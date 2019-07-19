#include <stdio.h>

//to check if a number is odd or even without using % operator
int main()
{
int num;
printf("Enter a number\n");
scanf("%d",&num);
// logic :- LSB of a binary number is 1 for odd and 0 for even - 
// 4 - 100  5-101  

if ((num & 1)==0)
printf("even number");

else
 { printf("odd  number");
 }
return 0;



}

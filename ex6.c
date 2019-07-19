#include<stdio.h>

// swapping 2 variables without using third variable

int main()
{
int x,y;
printf("Enter x and y\n");
scanf("%d%d",&x,&y);
printf("Before swapping x = %d and y =%d\n",x,y);
x = x+y;  // x= 4 y =6 --- x =4+6 =10
y = x-y;  // y = 10 -6 = 4 
x = x-y;  // x = 10 -4 = 6
printf("After swapping x = %d and y =%d\n",x,y);
return 0;

}

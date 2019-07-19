#include <stdio.h>
// swap 2 numbers
int main()
{
int x,y,c;
printf("Enter two numbers x and y \n");
scanf("%d%d",&x,&y);
printf("Before swapping x = %d and y = %d\n",x,y);
c = x;
x = y;
y =c;
printf("After swapping x = %d and y = %d\n",x,y);
return 0;


}

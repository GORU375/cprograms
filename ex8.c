#include <stdio.h>

// to check odd or even without bitwise

int main(){
int x, a;
printf("Enter the number\n");
scanf("%d",&x);
a = x/2;
a = a*2;
if (a==x)
printf("Even\n");
else
printf("odd\n");
return 0;
}

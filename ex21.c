#include <stdio.h>

// product of first n natural number

int main()
{
int n, product = 1;
printf("Enter n \n");
scanf("%d",&n);
for(int i=1; i<=n; i++)
  product= product * i;

printf("The product is %d",product);


}

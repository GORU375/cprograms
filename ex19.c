#include <stdio.h>

// print table of user choice


int main()
{
int n;
printf("Enter which table you know to print\n");
scanf("%d",&n);

for(int i=1; i<=10; i++)
{
 printf("%d * %d = %d\n",n,i, n*i);


}




}

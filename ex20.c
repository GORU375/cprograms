#include <stdio.h>

// print sum of first n natural number

int main()
{
int n;
printf("Enter n \n");
scanf("%d",&n);
printf("The sum is %d ",(n*(n+1))/2);
int sum =0;
for(int i =1; i<=n; i++)
{
sum = sum+i;
}
printf("The sum is %d",sum);


}

















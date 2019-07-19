// to convert binary to decimal

#include <stdio.h>
#include <math.h>

int main()
{
int n,r,sum=0;
printf("Enter a binary number\n");
scanf("%d",&n);

for(int i=0; n!=0; i++)
	{
	 r = n%10;
	 sum = sum + r *pow(2,i);
	 n = n/10;	
	
	
	}
printf("The decimal number is %d\n",sum);




}



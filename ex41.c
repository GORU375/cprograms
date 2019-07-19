#include <stdio.h>

//decimal to binary


int main()
  {
  int n,r,bin=0,i=1;
  printf("Enter a number\n");
  scanf("%d",&n);
  while(n!=0)
  	{
	 r = n%2;
	 n = n/2;
	 bin = bin + r * i;
	 i = i *10;
		
	}
  printf("The binary value is %d",bin);
  
 
  
  
  
  
  
  }

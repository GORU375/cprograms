#include <stdio.h>

// to print n +ve number with 2 bits set
//
int main()
  {
  int n,i,j;
  printf("Enter a number\n");
  scanf("%d",&n);
  for(i=2; n!=0; i=i*2)
    {
      for(j=1;j<i; j=j*2)
	{
	  printf("%d\n",i+j);
	  n--;
          if(n==0)
	   break;
	
		
	}
    
    
    
    
    
    
    }
  
  
  
  
  
  
  
  
  
  }

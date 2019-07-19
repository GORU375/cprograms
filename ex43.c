#include <stdio.h>
#include <stdlib.h>
// to print first n positive number with 2 bits set


int main()
 {
   int n, r, m,i=1, count =0;
   printf("Enter a number\n");
   scanf("%d",&n);
   
   
  
while(n!=0)
  { 
   m= i;
   count =0;
   while(m!=0)
    {
     r = m%2;
     if(r==1)
	count = count + 1;
     m = m/2;   
       
    }

   if (count == 2)
   { printf("%d\t",i);
     n--;
   }
   i++;
  
  
  }
 
 
 
 }

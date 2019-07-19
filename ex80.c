// fibonacci sequence
#include <stdio.h>
int main()
{
 int n, next, x =0, y=1;
 printf("Enter n\n");
 scanf("%d",&n);
 for(int i=0; i<n; i++)
  {
      if (i<=1)
         next =i;
    else
    {
     next = x + y;
     x= y;
     y= next;
    }
     printf("%d\t",next);
    
    
  }




}
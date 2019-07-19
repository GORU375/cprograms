#include <stdio.h>
#include <math.h>
// print all armstrong number below 1000

int main()
{
int i,n,r,cubes=0;
for(i=0;i<1000;i++)
   {
     n=i;
     while(n!=0)
        {
          r =n%10;
          cubes+= pow(r,3);
           n = n/10;
        }
     if (cubes == i)
        printf("%d\t",i);    
     
     cubes =0;
    }


}

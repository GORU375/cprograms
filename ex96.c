// rotate an array
#include <stdio.h>
int main()
{
int a[] = {1,2,3,4,5};
int i,temp;
temp = a[4];
for(i=4; i>=1; i--)
  {
    a[i] = a[i-1];
  }
 a[0] = temp;

 printf("rotated array is \n");

 for(i=0; i<=4; i++)
   {
    printf("%d\t",a[i]);


   }





}

// largest element in array
#include <stdio.h>
int main()
{
int a[10]={1,5,7,31,2,6,4,8,12,42};
int max = a[0];
for(int i =1; i<10; i++)
  {
    if(max < a[i])
      max = a[i];
  }
printf("The largest element is %d",max);









    
}
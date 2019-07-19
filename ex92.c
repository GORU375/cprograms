//sum of even and odd numbers in array

#include <stdio.h>
int main()
{
 int a[10];
 int sumodd=0, sumeven=0;
 for(int i=0; i<10; i++)
   {
    printf("Enter a number\n");
    scanf("%d",&a[i]);
   }
 for(int j=0; j<10; j++)
   {
    if(a[j]%2==0)
      sumeven += a[j];
    else
        sumodd += a[j]; 

   }
   printf("The sum of even and odd numbers are %d\t%d",sumeven,sumodd);


}
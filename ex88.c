// sum of cubes of first n natural number using recursion
int cubes(int n);
#include <stdio.h>
#include <math.h>
int main()
{
int n;
printf("Enter n\n");
scanf("%d",&n);
printf("%d",cubes(n));


}

int cubes(int n)
{
 if(n>=1)
  {
   return pow(n,3)+ cubes(n-1);
   

  }




}
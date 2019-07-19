#include <stdio.h>
#include <math.h>
// find roots of quadratic equation : ax^2+bx+c

int main()
{
int a,b,c,d;
float x,y;
printf("Enter coefficient of x^2, x and constant");
scanf("%d%d%d", &a,&b,&c);
d = b*b-4*a*c;
if(d<0)
   printf("Booth roots are imaginary");
else if(d==0)
{
 
  printf("Both roots are equal");
   x= -b/(2.0*a);
   y = -b/(2.0*a);
   printf("The roots are %f and %f",x,y);

}
else{
   printf("Roots are real and distinct");
   x = (-b + sqrt(d))/(2.0*a);
   y = (-b - sqrt(d))/(2.0*a);
   printf("The roots are %f and %f",x,y);

}






}

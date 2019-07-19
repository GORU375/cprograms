// area of circle
#include <stdio.h>
float area(int);
int main()
{
int r;
printf("Enter the radius");
scanf("%d",&r);
printf("%f",area(r));
return 0;


}

float area(int r)
{
  return 3.14 * r*r; // area = 3.14 * r^2

}
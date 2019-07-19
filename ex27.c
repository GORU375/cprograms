#include <stdio.h>

// program to calculate if a give year is a leap year


int main()
{
int year;
printf("Enter year\n");
scanf("%d",&year);
if (year%4)// it is not divisible by 4
   printf("NOt a leap year");

else if (year%100) // it is not a century year
  printf("Leap year");

else if (year%400) // if not divisible by 400
  printf("Not a leap year");

else
  printf("Leap year");

return 0;
}

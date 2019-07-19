// sum of squares of n
#include <stdio.h>
#include <math.h>

int sumofsquares1(int);
void sumofsquares2(int);

int main()
{
int n;
printf("Enter n\n");
scanf("%d",&n);
printf("The sum is %d\n",sumofsquares1(n));
sumofsquares2(n);
return 0;

}

int sumofsquares1(int n)
{
  int sum = 0;
  for(int i=1; i<=n; i++)
    {
      sum = sum + pow(i,2);

    }
  return sum;

}

void sumofsquares2(int n)
{
  int sum = 0;
  for(int i=1; i<=n; i++)
    {
      sum = sum + pow(i,2);

    }
  printf("The sum is %d",sum);

}





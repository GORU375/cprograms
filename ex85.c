// print n natural number in reverse order
void print(int);
#include<stdio.h>
int main()
{
int n;
printf("Enter n \n");
scanf("%d",&n);
print(n);
return 0;

}

void print(int n)
{
 if(n>=1)
  {printf("%d\t",n);
   print(n-1);
  }


}
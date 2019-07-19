// print first n natural numebr suing recursion
#include <stdio.h>
int print(int);
int main()
{
int n,i;
printf("Enter n\n");
scanf("%d",&n);
print(n);


}

int print(int n)
{
 if(n>=1)
  {
   print(n-1);
   printf("%d",n);

  }
 

}
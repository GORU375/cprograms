#include <stdio.h>

// print first n even natural number in reverse order

int main()
{
int n;
printf("Enter n \n");
scanf("%d",&n);

for(int i=n; i>=1; i--)
{
printf("%d ",2*i);


}

// print first n odd natural number in reverse order
for (int i=n; i>=1;i--)
{
printf("%d ",2*i-1);

}





}

#include<stdio.h>

// print first n natural number in reverse order
int main()
{
int n;
printf("Enter n\n");
scanf("%d",&n);

// for loop
for(int i=n; i>=1; i--)
{
printf("%d  ",i);

}

// while loop
int c =n;
while(c>=1){
printf("%d  ",c);
c--;

}

// do while
int i =1;
do {
printf("%d ",n+1-i);
i++;

}while(i<=n);






}

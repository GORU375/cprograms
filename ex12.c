#include <stdio.h>

// print first n natural numbers n is given by user

int main()

{
int n;
printf("Enter n \n");
scanf("%d",&n);
//for loop
for(int i=1 ;i<=n; i++)
{
printf("%d\n",i);

}

//while loop
int i =1;
while(i<=n){
printf("%d\n",i);
i++;

}

// do while loop 
i = 1;
do {
printf("%d\n",i);
i++;

}while(i<=n);




}


//first first N prime numbers
// 2 3 5 7 11 13 .................n

#include <stdio.h>
int main()
{
int i=2,j,n;
printf("Enter N\n");
scanf("%d",&n);

while(1)
{
    for(j=2; j<i; j++)
        {
        if(i%j==0)
            break;           

        }
    if(j==i)
        { printf("%d\t",i);
          n--;
        }

    if(n==0)
        break;
    i++;

}

}
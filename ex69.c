/*  1 + (1+2) + (1+2+3) + ......+ (1+2+3+..+N)   */
//  1st   2nd     third               Nth term

#include <stdio.h>
int main()
{
 int i, n, N, s, sum = 0;
 printf("Enter N\n");
 scanf("%d",&N);
 for(n=1; n<=N; n++)
   {
    s=0;
     for(i=1; i<=n; i++)
       {
        s=s+i;

       }
    sum = sum + s;

   }
printf("%d", sum);











}
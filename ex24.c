#include <stdio.h>
// comparison of 3 numbers

int main()
{
int a,b,c, largest;
printf("Enter a b and c");
scanf("%d  %d  %d",&a,&b,&c);
largest = a>b?((a>c)?a:c):((b>c)?b:c);
printf("The larges one is %d",largest);
if (a>b)
  {
    if(a>c )
     
      printf("%d is greatest",a);
    else
       printf("%d is greatest",c);
        
}
else 
{
if (b>c)
   printf("%d is greatest",b);
else
   printf("%d is greatest ",c);


}

return 0;





}


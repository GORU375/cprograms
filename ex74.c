// print sum of first n natural number
 void sum1(void);
 void sum2(int);
 int sum3(void);
 int sum4(int);

 #include <stdio.h>
 int main()
 {
  int n;
 printf("Enter n\n");
 scanf("%d",&n);
 sum1();
 sum2(n);
 printf("The sum is %d\n",sum3());
 printf("The sum is %d\n",sum4(n));
 }

 void sum1(void)
{
 int n,sum=0;
 printf("Enter n\n");
 scanf("%d",&n);
 for(int i =1; i<=n; i++)
   {
       sum = sum +i;
   }
 printf("The sum is %d",sum);

}
void sum2(int n)
{
 int sum = 0;
 for(int i =1; i<=n; i++)
   {
       sum = sum +i;
   }
 printf("The sum is %d\n",sum);

}

 int sum3(void)
 { int n;
  int sum = 0;
  printf("Enter n\n");
  scanf("%d",&n);
  for(int i =1; i<=n; i++)
   {
       sum = sum +i;
   }
  return (sum);

 }

  int sum4(int n)
  {
    int sum=0;
    for(int i =1; i<=n; i++)
     {
       sum = sum +i;
     }
    return (sum);

  }


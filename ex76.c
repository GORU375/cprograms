// print pascal triangle
#include <stdio.h>
int factoria(int);
int comb(int, int);
void printpascal(int);

int factorial( int n)
{
 int fact = 1;
 while(n!=0)
  {
   fact= fact * n;
   n--;
  }
return (fact);
}

int comb(int n, int r)
 {
   int n_fact = factorial(n);
   int r_fact = factorial(r);
   int nr_fact = factorial(n-r);
   return (n_fact/(r_fact*nr_fact));
   

 }

void printpascal(int p)

{ int i,j,k,r;
   int line;
   line = p;
  for(i=1; i<=line; i++)
   {
     k=1;
     r=0;
     for(j=1; j<=2*line-1; j++)
       {
         if(j>=line+1-i && j<=line-1+i && k)
            { 
              printf("%d",comb(i-1,r));
              //printf("*");
              k = 0;
              r++;
            }

         else
         {
             printf(" ");
             k = 1;
         }

       }
    printf("\n");

   }

}

int main()
{
 int l;
 printf("Enter number of line\n");

 scanf("%d",&l);
 printpascal(l);



}
// add two 3*3 matrix

#include <stdio.h>
int main()
{
int a[3][3],b[3][3];
int c[3][3], i,j;
int sum = 0;
for(i=0; i<3; i++)
   {
    for(j=0; j<3; j++)
      {
        printf("Enter element for first array\n");
        scanf("%d",&a[i][j]);
      }
   }

for(i=0; i<3; i++)
   {
    for(j=0; j<3; j++)
      {
        printf("Enter element for second array\n");
        scanf("%d",&b[i][j]);
      }
   }

for(i=0; i<3; i++)
   {
    for(j=0; j<3; j++)
      {
        c[i][j]= a[i][j] + b[i][j];
      }
   }
printf("The final matrix is \n");
for(i=0; i<3; i++)
   {
    for(j=0; j<3; j++)
      {
        printf("%d\t",c[i][j]);
      }
    printf("\n");
   }








}
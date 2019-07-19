// sort array using recursion
int getmaxIndex(int a[] , int size);
void sort(int a[], int size);
#include <stdio.h>

int main()
{
 int a[] = {1,2,3,4,5,6,7,8,9,10};
 int size = 10;
 int i;
 sort(a, size);
for(int i=0; i<size; i++)
 {
  printf("%d\t",a[i]);
 }
}

void sort(int a[], int size)
 {
     int maxIndex,t;;
      if(size>1)
   {
       maxIndex = getmaxIndex(a, size);
       t= a[size-1];
       a[size-1] = a[maxIndex];
       a[maxIndex] = t;
       sort(a, size-1);
   }
 
}

 
 int getmaxIndex(int a[] , int size)
  {
    int max , maxindex;
     max= a[0]; // initialize the maximum value with 0th value
    maxindex = 0;
    int i;
    for(i=1; i<size; i++)
    {
      if (max > a[i])
        maxindex= i; // to get the maximum value index in the array

    }
    return maxindex;

  }
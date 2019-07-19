// calloc(no of elements, size of 1 unit)
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int *ptr;
 ptr = (int*) calloc(5, sizeof(int));
 if(ptr==NULL)
   {printf("Memory not available");
   exit(0);
   }
 for(int i =0; i<5; i++)
   printf("%d\t",ptr[i]);

  free(ptr);
  for(int i =0; i<5; i++) //can access unallocated memory
   printf("%d\t",ptr[i]);







}
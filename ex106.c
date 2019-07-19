// dynamic memory allocation
// malloc - used to allocate memory initialized with garbage value 
// calloc - used to allocate memory initialized with 0
// realloc - used to inrease or decrease size of array
// free - free the memory
#include<stdio.h>
#include <stdlib.h>
struct emp
{
    int id;
    char name[20];
};

int main()
{
 struct emp * ptr;
 ptr = (struct emp *)malloc(sizeof(struct emp));
 if(ptr==NULL)
   printf("out of memory error");
else
{
    printf("Enter id and name\n");
    scanf("%d",&ptr->id);
    while ((getchar()) != '\n'); // clearing the input buffer
    gets(ptr->name);
    printf("Id : %d  name :%s",ptr->id,ptr->name);
}

 


}
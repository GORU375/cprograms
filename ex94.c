#include <stdio.h>
void print(char *a);

int main()
{
//char a[20] = "Hello"; strings get stored in the space
//print(a);
 char *a = "Hello"; // strings get stored as constant in the text segment of memory and cannot be modified.
 // a[0]="K";  is not allowed
 print(a);


}
void print(char *a)
{
  while(*a!='\0') // a[i]==*(a+i) 
    {
        printf("%c",*a);
        a++;
    }


}

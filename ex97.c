
// for multiple words use gets() and single word just use scanf()
// strlwr converts upper case string to lower case
// strrev reverse the string
#include<stdio.h>
#include <string.h>  
void strrev(char *);

int main()
{
char name[20];
printf("Enter your name\n");
gets(name);
strrev(name);
printf("\n%s\n",name);
printf("The length of name is %lu",strlen(name));
}

// program to enter integer only
#include <stdio.h>


int main()
{
 int x= 0;
 int num= 0;
char ch;
do {

 scanf("%c",&ch);
 if (ch>=48 && ch<=57){
 num = num*10 + (ch-48);
 }
 if (ch==10)
  break;
 
}while(1);
 printf("You have entered %d\n",num);
return 0;
}



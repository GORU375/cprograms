// reading from a file using fgets()
#include <stdio.h>
#include <stdlib.h>
int main()
{
 FILE * fp; 
 char str[10];
 fp = fopen("f1.txt","r");
 if(fp==NULL)
   {
      printf("File not exist");
      exit(1);
   }
while(fgets(str,5,fp)!=NULL)
  {
      printf("%s",str);
  }
fclose(fp);


}
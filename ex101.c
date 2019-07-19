//reading from a file using fgetc()
#include <stdio.h>
#include <stdlib.h>
int main()
{
 FILE * fp; 
 char ch;
 fp = fopen("f1.txt","r");
 if(fp==NULL)
   {
      printf("File not exist");
      exit(1);
   }
 ch =fgetc(fp); // after reading the first char in the file it will point to next char in the file.
 while(!feof(fp))
  {
    printf("%c",ch);
   ch =fgetc(fp);
  }
  fclose(fp);








}
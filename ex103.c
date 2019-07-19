// writing to a file using fputs(str,fp) 
#include <stdio.h>
#include <stdlib.h>
int main()
{
 FILE * fp; 
 char ch[100];
 fp = fopen("f2.txt","w");
 if(fp==NULL)
   {
      printf("File not exist");
      exit(1);
   }
fputs("This is the start of text\n",fp);
fputs("This string is going to be added",fp);
printf("Enter something to write to the file\n");
gets(ch);
fputs(ch,fp);
fclose(fp);


}


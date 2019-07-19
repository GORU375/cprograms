// file handling 
// writing to a file
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
 FILE *fp;
 char txt[100];
 fp=fopen("f1.txt","w"); // returns a pointer to file 
 if(fp==NULL)
    {
    printf("file not opened");
    exit(1);
    }
 printf("Enter any text\n");
 fgets(txt,100,stdin);

for(int i=0; i<strlen(txt); i++)
  {
    fputc(txt[i],fp);
  }
fclose(fp); //releases buffer and file







}
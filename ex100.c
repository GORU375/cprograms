// file opening modes
/*
r : opens a text file in reading mode.
w : opens or creates a text file in writing mode.
a : opens a text file in append mode.
r+ : opens a text file in both reading and writing mode. The file must exist.
w+ : opens a text file in both reading and writing mode. 
If the file exists, it's truncated first before overwriting. Any old data will be lost.
 If the file doesn't exist, a new file will be created.
a+ : opens a text file in both reading and appending mode.
 New data is appended at the end of the file and does not overwrite the existing content.
rb : opens a binary file in reading mode.
wb : opens or creates a binary file in writing mode.
ab : opens a binary file in append mode.
rb+ : opens a binary file in both reading and writing mode, and the original content is overwritten if the file exists.
wb+: opens a binary file in both reading and writing mode and works similar to the w+ mode for binary files. The file content is deleted first and then new content is added.
ab+: opens a binary file in both reading and appending mode and appends data at the end of the file without overwriting the existing content.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
FILE *fp;
char a[100];
fp = fopen("f1.txt","a");
if(fp==NULL)
  {
   printf("file not opened");
   exit(1);
  }
printf("Enter the text to append");
gets(a);
for(int i=0; i<strlen(a); i++)
   {fputc(a[i],fp);
   }

fclose(fp);




}
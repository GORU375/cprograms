// writing to a file using fwrite(void * buffer, int size,int count, FIle * fp)
// write in binary mode for photos, music
// \n \t stored as it is

#include <stdio.h>
#include <stdlib.h>
struct book
{
 int bookid;
 char title[20];
 float price;
};

int main()
{
 FILE * fp; 
 struct book b1;
 fp = fopen("f3.dat","ab");
 printf("Enter book id title and price \n");
 scanf("%d",&b1.bookid);
 while ((getchar()) != '\n'); // clearing the input buffer
 gets(b1.title);
 scanf("%f",&b1.price);
 if(fp==NULL)
   {
      printf("File not exist");
      exit(1);
   }
fwrite(&b1,sizeof(b1),1,fp);
fclose(fp);


}


//reading a file using fread(void * buffer, size,no of record, *fp)
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
 FILE *fp;
 struct book b1;
 fp = fopen("f3.dat","rb");
 if(fp==NULL)
   {
       printf("file not found\n");
       exit(1);
   }
 
while(fread(&b1,sizeof(b1), 1, fp) > 0)
    {
        printf("%d %s %f\n",b1.bookid, b1.title, b1.price);
    }
fclose(fp);




}

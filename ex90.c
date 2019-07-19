// add 2 numbers using command line arguments in c
#include <stdio.h>
int string_to_int(char *str);
int main(int argc, char* argv[])
{
printf("Argument length : %d\n",argc);
int sum=0;
for(int i=1; i<argc; i++)
  {
    sum+= string_to_int(argv[i]);

  }
  printf("\n%d",sum);

}

int string_to_int(char *str)
{
 int i,x;
 for(i=0,x=0; str[i]; i++)
   { 
       if(str[i]>='0' && str[i]<='9')
          x = x*10 + (*(str+i) -48 );
        else
        {
            break;
        }
   }
   return x;




}

#include<stdio.h>
// print your name using for loop
void forloop(void);
void whileloop(void);
void dowhile(void);
int main()
{
forloop();
whileloop();
dowhile();



return 0;

}

void forloop(){
 for(int i=0;i<5; i++)
   {
   printf("SANJOG JUNG CHHETRI\n");


   }

}

void whileloop()
{
int i =0;
while(i<5){
 printf("SANJOG JUNG CHHETRI\n");
 i++;
      }

}

void dowhile(){
int i =0;
do {
printf("SANJOG JUNG CHHETRI\n");
i++;

}while(i<5);



}

// structure for student information
#include <stdio.h>
struct student 
{
   int rollno;
   char name[20];
   int age;

}; 
void showdata(struct student);
struct student inputdata();

int main()
{
struct student s1;
s1 = inputdata();
showdata(s1);

}

struct student inputdata()
 {
    struct student s;
    printf("Enter  name roll and age\n");
    gets(s.name);
    scanf("%d",&s.rollno);
    scanf("%d",&s.age);
    return s;

 }

void showdata(struct student s)
 {
   printf("Student data:\n");
   printf("Roll no : %d\n",s.rollno);
   printf("Name : %s\n",s.name);
   printf("Age : %d",s.age);

 }


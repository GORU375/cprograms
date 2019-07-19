#include <stdio.h>
#include <time.h>
 
int main()
{
    time_t t; // declaring a time structure
    t = time(NULL); // time() gives the current time

   printf("Today's date and time : %s", ctime(&t)); // ctime() converts it into human readable format

 
    return 0;
}
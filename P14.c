#include <stdio.h>

int main()
{
    if (1) // in if condition , it should contain non-zero value
    {
        printf("this f is executed\n");
    }
    if (234324)
    {
       printf("this f is also executed\n");
        /* code */
    }
    if(0)
    {
        printf("this f cant be executed"); // as it contains zero value , it should contain non-zero value 
    }
    return 0;
}
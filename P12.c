#include <stdio.h>

int main()
{
    int age=14;
    if (age>18) // in if else condition , we use {} brackets to define the body of if and else
    { // also in if else condition , we dont use ; after if condition
        printf("you are eligible to vote.\n");// if your age is greater than 18 , then you are eligible to vote , else you aren't
    }
    else // else condition , dont use ; after else , and there is no condition in else
    {
    printf("you are not eligible");
    }
    return 0;
}
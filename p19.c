#include <stdio.h>

int main()
{
    int age = 63;
    if (age >60) // nested if else condition
    {
        printf("You can drive , but drive slowly as you are senior citizen");
    }
    else if (age >18) // else if condition , in nested if else , you can use multiple else if conditions
    // you should not use semicolon after if condition as it will terminate the if condition there only
    {
        printf("You can drive");
    }
    else
    {
        printf("you cannot drive");
    }
    return 0;
}
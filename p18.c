#include <stdio.h>

int main()
{
    int a=0, b=1;
    printf("The value of both a and b is %d", a&&b);
    if(a&&b){
    printf("\n Both are true");}
    else {printf("\n One of them is false");}

// && is logical AND operator , if both statements are true , then it returns true value
// if any one statement is false , then it returns false value
    return 0;
}
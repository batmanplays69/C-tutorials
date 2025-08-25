#include <stdio.h>

int main()
{
    int a,b;
    a=1;b=0;
    printf("this statement is true = %d", a||b); // || is logical OR operator , if any one statement is true , then it returns true value
// if both statements are false , then it returns false value
// 0 is false value , and any non-zero value is true value
    return 0;
}
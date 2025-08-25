#include <stdio.h>

int main()
{
    int a=9 , b=90;
    a>b ? printf("true"):printf("false");
    // ternary operator is a short form of if else condition
    // syntax : condition ? expression1 : expression2 ;
    // if condition is true , then expression1 is executed
    // if condition is false , then expression2 is executed
    // you should not use semicolon after condition as it will terminate the condition there only
    // use colon : to separate the two expressions
    return 0;
}
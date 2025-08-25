#include <stdio.h>

int main()
{
    int a;
    printf("Enter number = ", a);
    scanf("%d", &a);
    printf("the value =%d", a%97);// % is modulus operator which gives remainder value
    
    return 0;
}
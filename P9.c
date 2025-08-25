#include <stdio.h>

int main()
{
    float P,R,T;
    printf("Enter P\n");
    scanf("%f", &P);
    printf("Enter R\n");
    scanf("%f", &R);
    printf("Enter T\n");
    scanf("%f", &T);

    printf("Simple Interest = %f", (P*R*T)/100);
    
    return 0;
}
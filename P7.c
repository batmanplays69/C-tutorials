#include <stdio.h>

int main()
{
    float radius;
    printf("Enter radius");
    scanf("%f", &radius);

    printf("Area of circle = %f\n" , 3.14*radius*radius);

    float height;
    height=4;
    printf("Volume of cylinder = %f", 3.14*radius*radius*height);



    return 0;
}
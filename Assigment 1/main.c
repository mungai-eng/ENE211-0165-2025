#include <stdio.h>
#include <stdlib.h>

int main()
{
    //surface area of a sphere
    float radius;
    float area;
    float pi=3.142;

    printf("please enter sphere radius: ");
    scanf("%f",&radius);

    area= 4 * pi * radius * radius ;
    printf("surface area is:%.4f\n" ,area);

    return 0;
}

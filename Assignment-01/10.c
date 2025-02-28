// Write a program to find area of the circle. Take radius of circle from user as input.

#include <stdio.h>

int main()
{
    int r;
    float pi = 3.14;
    printf("Enter radius of Circle: ");
    scanf("%d", &r);

    printf("Area of Circle is: %.3f", pi*r*r);
    return 0;
}
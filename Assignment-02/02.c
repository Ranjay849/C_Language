// Write a program to calculate circumference of a circle.

#include <stdio.h>

int main()
{
    int r;
    float pi = 3.14;
    printf("Enter the radius: ");
    scanf("%d", &r);

    printf("Circumference of circle is: %.3f", 2*pi*r);
    return 0;
}
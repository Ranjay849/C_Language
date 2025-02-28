// Write a program to calculate area of a rectangle. Input appropriate data from the user.

#include <stdio.h>

int main()
{
    int l, w;
    printf("Enter length and width.....\n");
    scanf("%d%d", &l,&w);

    printf("Area of Rectangle is: %d", l*w);
    return 0;
}
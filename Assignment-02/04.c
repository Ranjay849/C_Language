// Write a program to calculate volume of a cuboid.

#include <stdio.h>

int main()
{
    int l, w, h;
    printf("Enter length, width & height....\n");
    scanf("%d%d%d", &l, &w, &h);

    printf("Volume is: %d cm^3", l*w*h);
    return 0;
}
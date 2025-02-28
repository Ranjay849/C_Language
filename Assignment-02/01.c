// Write a program to calculate average of three integers. Numbers are given by the user.

#include <stdio.h>

int main()
{
    int a, b, c;
    float avg;
    printf("Enter three integer numbers....\n");
    scanf("%d%d%d", &a, &b, &c);

    avg = (a+b+c)/3.0;
    printf("Average is: %.3f", avg);
    return 0;
}
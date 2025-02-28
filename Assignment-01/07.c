// Write a program to calculate sum of two integers. Numbers are taken from user through keyword.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two integer numbers.....\n");
    scanf("%d%d", &a, &b);

    printf("Sum is: %d", a+b);
    return 0;
}
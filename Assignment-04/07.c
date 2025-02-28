// Write a program to swap values of two int variables without using third variable and arithmetic operators.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers.....\n");
    scanf("%d%d", &a, &b);

    printf("Before swapping a = %d, b = %d", a,b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("\nAfter swapping a = %d, b = %d", a, b);
    return 0;
}
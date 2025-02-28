// Write a program to swap values of two int variables in single line arithmetic expression.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers.....\n");
    scanf("%d%d", &a, &b);

    printf("Before swapping a = %d, b = %d", a,b);

    a = a + b - (b=a);

    printf("\nAfter swapping a = %d, b = %d", a, b);
    return 0;
}
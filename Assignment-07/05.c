// Write a program to check whether a given number is even or odd using a bitwise operator.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n&1)
    {
        printf("odd Number");
    }
    else
    {
        printf("Even Number");
    }
    return 0;
}
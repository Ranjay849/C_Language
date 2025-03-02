// Write a program to check whether a given number is divisible by 5 or not.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n%5==0)
    {
        printf("Divisible");
    }
    else
    {
        printf("Not Divisible");
    }
    return 0;
}
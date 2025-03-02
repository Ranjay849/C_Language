// Write a program to check whether a given number is a three-digit number or not.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter three-digits number: ");
    scanf("%d", &n);

    if (n>99 && n<1000)
    {
        printf("It's a Three-Digit Number.");
    }
    else
    {
        printf("It's not a Three-Digit Number.");
    }
    return 0;
}
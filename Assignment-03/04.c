// Write a program to print last digit of a given number.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("%d", n%10);
    return 0;
}
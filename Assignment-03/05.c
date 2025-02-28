// Write a program to print a given number without its last digit.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("%d", n/10);
    return 0;
}
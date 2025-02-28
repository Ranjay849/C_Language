// Write a program to input an ASCII code from the user and print its corresponding character.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the ASCII code: ");
    scanf("%d", &n);

    printf("%c", n);
    return 0;
}
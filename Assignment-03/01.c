// Write a program to input a character from the user and print its ASCII code.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("%d", ch);
    return 0;
}
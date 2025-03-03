// Write a program to check whether a given alphabet is in uppercase or lowercase.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any Character: ");
    scanf("%c", &ch);

    if (ch>=65 && ch<=90)
    {
        printf("Uppercase Character");
    }
    else if (ch>=97 && ch<=122)
    {
        printf("Lowercase Character");
    }
    else
    {
        printf("Other Character");
    }
    return 0;
}
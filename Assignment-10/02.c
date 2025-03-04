// Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lowercase), a digit or a special character.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
    {
        printf("Uppercase Character");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("Lowercase Character");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
    return 0;
}
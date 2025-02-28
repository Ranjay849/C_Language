// Write a program to take three-digit number from the user and rotate its digit by one position towards the right.

#include <stdio.h>

int main()
{
    int digits;
    printf("Enter three-digits number: ");
    scanf("%d", &digits);

    printf("%d%d%d", (digits%10),(digits/10%10),(digits/100));
    return 0;
}
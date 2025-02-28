// Write a program to input a three-digit number and display the sum of the digits.

#include <stdio.h>

int main()
{
    int digits;
    printf("Enter three-digit number: ");
    scanf("%d", &digits);

    printf("Sum is: %d", (digits%10) + (digits/10%10) + (digits/100));
    return 0;
}
// Write a program to reverse a given number.

#include <stdio.h>

int main()
{
    int a, b=0, c;
    printf("Enter the number: ");
    scanf("%d", &a);

    while (a)
    {
        c=a%10;
        b=b*10+c;
        a=a/10;
    }
    printf("Reverse is: %d", b);
    return 0;
}
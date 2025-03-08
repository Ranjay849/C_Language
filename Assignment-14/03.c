// Write a program to check whether a given number is a Prime number or not.

#include <stdio.h>

int main()
{
    int i=2, n;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (i<n)
    {
        if (n%i==0)
        {
            break;
        }
        i++;
    }
    if (i==n)
        {
            printf("Prime Number");
        }
        else
        {
            printf("Not a Prime Number");
        }
    return 0;
}
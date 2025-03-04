// Write a program which takes the month number as an input and display number of days in that month.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the month number: ");
    scanf("%d", &n);

    if (n==4 || n==6 || n==9 || n==11)
    {
        printf("30 Days");
    }
    else if (n==2)
    {
        printf("28 Days or (29 Days in Leap Year)");
    }
    else if (n>=1 && n<=12)
    {
        printf("31 Days");
    }
    else
    {
        printf("Please enter a valid month number (1-12)");
    }
    return 0;
}
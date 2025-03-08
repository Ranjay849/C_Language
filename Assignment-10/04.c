// Write a program which takes the month number as an input and display number of days in that month.

#include <stdio.h>

int main()
{
    int m;
    printf("Enter the month number: ");
    scanf("%d", &m);

    if (m==1 || m==3 || m==5 || m==7 || m==10 || m==12)
    {
        printf("31 Days");
    }
    else if (m==4 || m==6 || m==9 || m==11)
    {
        printf("30 Days");
    }
    else if (m==2)
    {
        printf("28 or 29 Days");
    }
    else
    {
        printf("Invalid Month number");
    }
    return 0;
}
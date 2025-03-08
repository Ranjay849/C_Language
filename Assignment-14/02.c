// Write a program to count digits in a given number.

#include <stdio.h>

int main()
{
    int N, count=0;
    printf("Enter the value for N: ");
    scanf("%d", &N);

    while (N)
    {
        N=N/10;
        count++;
    }
    printf("Number of digits: %d", count);
    return 0;
}
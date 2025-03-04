// Write a program to calculate sum of first N even natural numbers.

#include <stdio.h>

int main()
{
    int i=2, N, Sum=0;
    printf("Enter the value for N: ");
    scanf("%d", &N);

    while (i<=N)
    {
        Sum=Sum+i;
        i+=2;
    }
    printf("Sum = %d", Sum);
    return 0;
}
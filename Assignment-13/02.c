// Write a program to calculate sum of first N even natural numbers.

#include <stdio.h>

int main()
{
    int i=1, N, Sum=0;
    printf("Enter the value for N: ");
    scanf("%d", &N);

    while (i<=N)
    {
       Sum=Sum+2*i;
       i++;
    }
    printf("Sum = %d", Sum);
    return 0;
}
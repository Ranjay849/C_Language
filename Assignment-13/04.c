// Write a program to calculate sum of squares of first N natural numbers.

#include <stdio.h>

int main()
{
    int i=1, N, Sum=0, S;
    printf("Enter the value for N: ");
    scanf("%d", &N);

    while (i<=N)
    {
        S=i*i;
        Sum=Sum+S;
        i++;
    }
    printf("Sum = %d", Sum);
    return 0;
}
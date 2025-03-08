// Write a program to calculate factorial of a number.

#include <stdio.h>

int main()
{
    int i=1, N, F=1;
    printf("Enter the value for N: ");
    scanf("%d", &N);

    while (i<=N)
    {
        F=F*i;
        i++;
    }
    printf("Factorial = %d", F);
    return 0;
}
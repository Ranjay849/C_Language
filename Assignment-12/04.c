// Write a program to print the first N odd natural numbers.

#include <stdio.h>

int main()
{
    int i=1, N;
    printf("Enter the value for N: ");
    scanf("%d", &N);

    while (i<=N)
    {
        printf("%d\n", i);
        i+=2;
    }
    return 0;
}
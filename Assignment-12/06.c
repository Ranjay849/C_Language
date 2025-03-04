// Write a program to print the first N even natural numbers.

#include <stdio.h>

int main()
{
    int i=2, N;
    printf("Enter the value for N: ");
    scanf("%d", &N);

    while (i<=N)
    {
        printf("%d\n", i);
        i+=2;
    }
    return 0;
}
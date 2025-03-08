// Write a program to print the first N even natural numbers.

#include <stdio.h>

int main()
{
    int i=1, N;
    printf("Enter the value for N: ");
    scanf("%d", &N);

    while (i<=N)
    {
        printf("%d\n", 2*i);
        i++;
    }
    return 0;
}
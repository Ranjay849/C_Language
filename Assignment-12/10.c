// Write a program to print a table of N.

#include <stdio.h>

int main()
{
    int i=1, N;
    printf("Enter the value for N: ");
    scanf("%d", &N);

    while (i<=10)
    {
        printf("%d x %d = %d\n", N, i, N*i);
        i++;
    }
    return 0;
}
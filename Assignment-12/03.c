// Write a program to print the first N natural numbers in reverse order.

#include <stdio.h>

int main()
{
    int N;
    printf("Enter the value for N: ");
    scanf("%d", &N);

    while (N>=1)
    {
        printf("%d\n", N);
        N--;
    }
    return 0;
}
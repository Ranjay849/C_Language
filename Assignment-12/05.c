// Write a program to print the first N odd natural numbers in reverse order.

#include <stdio.h>

int main()
{
    int i=1, N;
    printf("Enter the value for N: ");
    scanf("%d", &N);

    while (N>=i)
    {
        if (N%2!=0)
        {
            printf("%d\n", N);
        }
        N--;
    }
    return 0;
}
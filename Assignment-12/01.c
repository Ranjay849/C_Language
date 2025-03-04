// Write a program to print MySirG N times on the screen.

#include <stdio.h>

int main()
{
    int i=1, N;
    printf("Enter the value for N: ");
    scanf("%d", &N);

    while (i<=N)
    {
        printf("MySirG\n");
        i++;
    }
    return 0;
}
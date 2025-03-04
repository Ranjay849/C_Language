// Write a program to print cubes of the first 10 natural numbers.

#include <stdio.h>

int main()
{
    int n=1;
    while (n<=10)
    {
        printf("%d\n", n*n*n);
        n++;
    }
    return 0;
}
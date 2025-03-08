// Write a program to print the first 10 even natural numbers.

#include <stdio.h>

// 1st Technique (Solved by me)
int main()
{
    int n=1;
    while (n<=10)
    {
        printf("%d\n", 2*n);
        n++;
    }
    return 0;
}
// Write a program to print the first 10 odd natural numbers in reverse order.

#include <stdio.h>

int main()
{
    int n=10;
    while (n>=1)
    {
      printf("%d\n", 2*n-1);
      n--;
    }
    return 0;
}
// Write a program to print a table of 5.

#include <stdio.h>

int main()
{
    int table=1;
    while (table<=10)
    {
        printf("5 x %d = %d\n", table, 5*table);
        table++;
    }
    return 0;
}
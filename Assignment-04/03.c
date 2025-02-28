// Write a program with one char type variable. Assign ‘A’ in the variable. Now change the value of variable from ‘A’to ‘B’ using Increment operator.

#include <stdio.h>

int main()
{
    char ch = 'A';
    ch++;
    printf("%c", ch);
    return 0;
}
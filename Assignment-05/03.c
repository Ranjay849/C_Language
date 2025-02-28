// Write a program to print size of an int, a float, a char and a double type variable.

#include <stdio.h>

int main()
{
    printf("int = %d \nfloat = %d \nchar = %d \ndouble = %d", sizeof(int), sizeof(float), sizeof(char), sizeof(double));
    return 0;
}
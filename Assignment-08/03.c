// Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the roots of quadractic equation.....\n");
    scanf("%d%d%d", &a, &b, &c);

    d=b*b-4*a*c;
    
    if (d>0)
    {
        printf("Real & Distinct");
    }
    else if (d<0)
    {
        printf("Imaginary");
    }
    else
    {
        printf("Real & Equal");
    }
    return 0;
}
// Write a program to calculate simple interest.

#include <stdio.h>

int main()
{
    int p, t;
    float r;
    printf("Enter principal,time & rate....\n");
    scanf("%d%d%f", &p, &t, &r);

    printf("Simple Interest is: %.3f", p*r*t/100);
    return 0;
}
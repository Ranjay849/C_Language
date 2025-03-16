// Write a program to calculate HCF of two numbers.

#include <stdio.h>

int main()
{
    int a, b, HCF;
    printf("Enter two numbers.....\n");
    scanf("%d%d", &a, &b);

    for(HCF=a<b?a:b; HCF>=1; HCF--)
    {
        if (a%HCF==0 && b%HCF==0)
        {
            printf("HCF is: %d", HCF);
            break;
        }
    }
    return 0;
}
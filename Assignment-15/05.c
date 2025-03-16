// Write a program to check whether two given numbers are co-prime numbers or not

#include <stdio.h>

int main()
{
    int a, b, HCF;
    printf("Enter two numbers.....\n");
    scanf("%d%d", &a, &b);

    for(HCF=a<b?a:b; HCF>=1; HCF--)
    {
        if(a%HCF==0 && b%HCF==0)
            break;
    }
    if(HCF==1)
    {
        printf("%d & %d are Co-Prime Number.", a, b);
    }
    else
    {
        printf("%d & %d are not Co-Prime Number.", a, b);
    }
    return 0;
}
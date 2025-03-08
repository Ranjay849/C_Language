// Write a program to calculate LCM of two numbers.

#include <stdio.h>

int main()
{
    int a, b, LCM;
    printf("Enter two numbers...\n");
    scanf("%d%d", &a, &b);

    LCM=a>b?a:b;
    while (LCM<=a*b)
    {
        if (LCM%a==0 && LCM%b==0)
        {
            break;
        }
        LCM++;
    }
    printf("LCM is: %d", LCM);
    return 0;
}
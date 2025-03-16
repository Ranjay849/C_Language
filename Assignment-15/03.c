// Write a program to find next Prime number of a given number.

#include <stdio.h>

int main()
{
    int i, n, num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(n=num+1; ; n++)
    {
        for(i=2; i<n; i++)
        {
            if(n%i==0)
                break;
        }
        if(n==i)
        {
            printf("%d", n);
            break;
        }
    }
    return 0;
}
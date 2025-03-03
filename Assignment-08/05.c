// Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers.....\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a>b)
        if (a>c)
            printf("%d", a);
        else 
            printf("%d", c);
    else if (b>c)
        printf("%d", b);
    else
        printf("%d", c);
    return 0;
}
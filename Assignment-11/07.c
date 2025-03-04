// Write a program to print the first 10 even natural numbers in reverse order.

#include <stdio.h>

// 1st Technique (Solved by me)
int main()
{
    int n=20;
    while (n>=2)
    {
        if (n%2==0)
        {
            printf("%d\n", n);
        }
        n--;
    }
    return 0;
}

// 2nd Technique
// int main()
// {
//     int n=20;
//     while (n>=1)
//     {
//         printf("%d\n", n);
//         n-=2;
//     }
//     return 0;
// }

// 3rd Technique
// int main()
// {
//     int n=10;
//     while (n>=1)
//     {
//         printf("%d\n", 2*n);
//         n--;
//     }
//     return 0;
// }
// Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

#include <stdio.h>

int main()
{
    int C, Cpp, Java, Python, JavaScript;
    printf("Enter marks for C, C++, Java, Python, JavaScript.....\n");
    scanf("%d%d%d%d%d", &C, &Cpp, &Java, &Python, &JavaScript);

    int marks = C>=33 && Cpp>=33 && Java>=33 && Python>=33 && JavaScript>=33;
    if (marks)
    {
        printf("Passed");
    }
    else
    {
        printf("Failed");
    }
    return 0;
}
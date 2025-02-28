// Write a program to input three characters from the user and display characters with their corresponding ASCII codes.

#include <stdio.h>

int main()
{
    char ch1, ch2, ch3;
    printf("Enter three characters.....\n");
    scanf("%c %c %c", &ch1, &ch2, &ch3);

    printf("ch1 = %d, ch2 = %d, ch3 = %d", ch1, ch2, ch3);
    return 0;
}
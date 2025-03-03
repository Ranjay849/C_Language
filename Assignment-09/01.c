// Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include <stdio.h>

int main()
{
    float CP, SP;
    printf("Enter the costPrice & sellingPrice.....\n");
    scanf("%f%f", &CP, &SP);

    if (SP>CP)
    {
        printf("Profit%% = %.2f%%", (SP-CP)/CP*100);
    }
    else
    {
        printf("Loss%  = %.2f%", (CP-SP)/CP*100);
    }
    return 0;
}
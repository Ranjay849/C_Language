// Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.

#include <stdio.h>

int main()
{
    int INR;
    float USD = 84.23;
    printf("Enter the value for INR: ");
    scanf("%d", &INR);

    printf("%f", INR/USD);
    return 0;
}
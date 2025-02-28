// Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.

#include <stdio.h>

int main()
{
    float CP, SP;
    printf("Enter costPrice & sellPrice.....\n");
    scanf("%f%f", &CP, &SP);

    printf("Profit or Loss: %f", (SP-CP)/12*25);
    return 0;
}
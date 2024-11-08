#include <stdio.h>

int main() {
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if((n/2)*2==n){
        printf("%d is a Even Number.", n);
    } else{
        printf("%d is a Odd Number.", n);
    }

    return 0;
}
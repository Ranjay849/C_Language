#include <stdio.h>

int main() {
    int n, isPrime = 1;

    printf("Enter the number to be checked: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a Prime Number.", n);
    } else {
        printf("%d is not a Prime Number.", n);
    }

    return 0;
}
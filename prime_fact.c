#include <stdio.h>
#include <math.h>

// Function to find and print all prime factors of a given number
void findPrimeFactors(int n) {
    // 1. Handle the smallest prime number: 2
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    // 2. n must be odd at this point, so we can skip even numbers
    // Iterate from 3 up to the square root of n
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // 3. If n is still greater than 2, then n itself is a prime number
    if (n > 2) {
        printf("%d ", n);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <= 1) {
        printf("Please enter a valid integer greater than 1.\n");
        return 1;
    }

    printf("Prime factors of %d are: ", num);
    findPrimeFactors(num);
    printf("\n");

    return 0;
}


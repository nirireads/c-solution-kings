#include <stdio.h>

/**
 * Calculates the sum of first N natural numbers using recursion.
 * Formula: Sum(n) = n + Sum(n-1)
 * Base case: Sum(0) = 0
 */
int sum_natural(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + sum_natural(n - 1);
}

int main() {
    int n;
    printf("Enter a number N: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 0) {
        printf("N should be a non-negative integer.\n");
    } else {
        printf("Sum of first %d natural numbers is %d\n", n, sum_natural(n));
    }

    return 0;
}

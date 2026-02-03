#include <stdio.h>

/**
 * Calculates the sum of digits of a number using recursion.
 * Formula: SumDigits(n) = (n % 10) + SumDigits(n / 10)
 * Base case: n == 0
 */
int sum_digits(int n) {
    if (n == 0) {
        return 0;
    }
    // Handle negative numbers by converting to absolute
    if (n < 0) n = -n;
    
    return (n % 10) + sum_digits(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Sum of digits of %d is %d\n", num, sum_digits(num));

    return 0;
}

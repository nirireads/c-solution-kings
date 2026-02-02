#include <stdio.h>

/**
 * Program: Non-void function that returns the square of a number.
 * Assignment: 21 - Question 4
 * Written for: 1st Year Bachelor Students
 */

// Function returning long long to handle larger squares if needed
long calculateSquare(int num) {
    return (long)num * num;
}

int main() {
    int n;

    printf("Enter a number to find its square: ");
    scanf("%d", &n);

    // Printing the return value directly
    printf("The square of %d is: %ld\n", n, calculateSquare(n));

    return 0;
}

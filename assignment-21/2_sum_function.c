#include <stdio.h>

/**
 * Program: Non-void function that returns the sum of two integers.
 * Assignment: 21 - Question 2
 * Written for: 1st Year Bachelor Students
 */

// Function definition with return type int
int calculateSum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Storing the return value of the function in a variable
    result = calculateSum(num1, num2);

    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}

#include <stdio.h>

/**
 * Program: Non-void function that returns the largest of three numbers.
 * Assignment: 22 - Question 1
 * Written for: 1st Year Bachelor Students
 */

// Function to find the maximum of three integers
int findLargest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int x, y, z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    // Call function and display returned value
    int result = findLargest(x, y, z);
    printf("The largest number is: %d\n", result);

    return 0;
}

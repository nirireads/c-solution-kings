#include <stdio.h>

/**
 * Program: Void function that checks if a number is positive, negative, or zero.
 * Assignment: 21 - Question 5
 * Written for: 1st Year Bachelor Students
 */

// Function handles logic and printing internally
void checkNumber(int val) {
    if (val > 0) {
        printf("%d is Positive.\n", val);
    } else if (val < 0) {
        printf("%d is Negative.\n", val);
    } else {
        printf("The number is Zero.\n");
    }
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    checkNumber(num);

    return 0;
}

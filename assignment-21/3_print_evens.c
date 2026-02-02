#include <stdio.h>

/**
 * Program: Void function that prints all even numbers from 1 to N.
 * Assignment: 21 - Question 3
 * Written for: 1st Year Bachelor Students
 */

// Function taking an integer N as parameter
void printEvens(int n) {
    printf("Even numbers from 1 to %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int limit;

    printf("Enter the value of N: ");
    scanf("%d", &limit);

    // Call the function
    printEvens(limit);

    return 0;
}

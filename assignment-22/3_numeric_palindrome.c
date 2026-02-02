#include <stdio.h>

/**
 * Program: Non-void function to check if a number is a palindrome.
 * Assignment: 22 - Question 3
 * Written for: 1st Year Bachelor Students
 */

// returns 1 if true, 0 if false
int isPalindrome(int num) {
    int original = num;
    int reversed = 0, remainder;

    // Handle negative numbers (usually not palindromic in numeric sense)
    if (num < 0) return 0;

    while (num > 0) {
        remainder = num % 10;
        reversed = (reversed * 10) + remainder;
        num /= 10;
    }

    return (original == reversed);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPalindrome(n)) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }

    return 0;
}

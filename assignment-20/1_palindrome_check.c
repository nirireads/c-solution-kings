#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * Program: Check whether a string is a palindrome or not.
 * Assignment: 20 - Question 1
 * Written for: 1st Year Bachelor Students
 */

int main() {
    char str[100];
    int length, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline

    length = strlen(str);

    // Compare characters from start and end
    for (int i = 0; i < length / 2; i++) {
        // Convert to lowercase to make it case-insensitive (optional but recommended)
        if (tolower(str[i]) != tolower(str[length - 1 - i])) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}

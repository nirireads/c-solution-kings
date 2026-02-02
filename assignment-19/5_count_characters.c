#include <stdio.h>

/**
 * Program: Read a string and count the number of characters (excluding \n).
 * Assignment: 19 - Question 5
 * Written for: 1st Year Bachelor Students
 */

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through the string until the null terminator
    for (int i = 0; str[i] != '\0'; i++) {
        // Increment count only if character is not a newline
        if (str[i] != '\n') {
            count++;
        }
    }

    printf("Total number of characters (excluding newline): %d\n", count);

    return 0;
}

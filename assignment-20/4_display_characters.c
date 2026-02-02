#include <stdio.h>

/**
 * Program: Input a string and display each character on a separate line.
 * Assignment: 20 - Question 4
 * Written for: 1st Year Bachelor Students
 */

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Characters on separate lines:\n");
    for (int i = 0; str[i] != '\0'; i++) {
        // Only print if it's not the newline character
        if (str[i] != '\n') {
            printf("%c\n", str[i]);
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

/**
 * Program: Read a string using fgets() and display its length using strlen().
 * Assignment: 19 - Question 1
 * Written for: 1st Year Bachelor Students
 */

int main() {
    char str[100];

    printf("Enter a string: ");
    // fgets is safer than gets because it prevents buffer overflow
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // strlen() returns the number of characters in the string
        // Note: fgets often includes the newline character (\n)
        printf("The length of the string is: %lu\n", (unsigned long)strlen(str));
    }

    return 0;
}

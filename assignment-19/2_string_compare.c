#include <stdio.h>
#include <string.h>

/**
 * Program: Read two strings and compare them using strcmp().
 * Assignment: 19 - Question 2
 * Written for: 1st Year Bachelor Students
 */

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove the trailing newline character

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove the trailing newline character

    // strcmp returns 0 if strings are identical
    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}

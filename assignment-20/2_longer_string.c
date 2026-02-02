#include <stdio.h>
#include <string.h>

/**
 * Program: Input two strings and display the longer one using strlen().
 * Assignment: 20 - Question 2
 * Written for: 1st Year Bachelor Students
 */

int main() {
    char str1[100], str2[100];
    int len1, len2;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 > len2) {
        printf("The longer string is: %s (Length: %d)\n", str1, len1);
    } else if (len2 > len1) {
        printf("The longer string is: %s (Length: %d)\n", str2, len2);
    } else {
        printf("Both strings are of equal length (%d).\n", len1);
    }

    return 0;
}

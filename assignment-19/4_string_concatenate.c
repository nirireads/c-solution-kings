#include <stdio.h>
#include <string.h>

/**
 * Program: Concatenate two strings using strcat().
 * Assignment: 19 - Question 4
 * Written for: 1st Year Bachelor Students
 */

int main() {
    char str1[200], str2[100]; // str1 must be large enough to hold both

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    // strcat appends str2 to the end of str1
    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}

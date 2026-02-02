#include <stdio.h>
#include <string.h>

/**
 * Program: Count the number of words in a string.
 * Assignment: 20 - Question 5
 * Written for: 1st Year Bachelor Students
 */

int main() {
    char str[100];
    int words = 0;
    int i = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Clean newline

    // Skip leading spaces
    while (str[i] == ' ' && str[i] != '\0') i++;

    // Iterate through the string
    while (str[i] != '\0') {
        // If we find a space or the end of the string after some characters, 
        // it marks the end of a word
        if (str[i] == ' ' || str[i + 1] == '\0') {
            words++;
            // Skip multiple consecutive spaces
            while (str[i] == ' ' && str[i] != '\0') i++;
        } else {
            i++;
        }
    }

    printf("Total number of words: %d\n", words);

    return 0;
}

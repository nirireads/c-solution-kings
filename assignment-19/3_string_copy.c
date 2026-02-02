#include <stdio.h>
#include <string.h>

/**
 * Program: Copy one string into another using strcpy().
 * Assignment: 19 - Question 3
 * Written for: 1st Year Bachelor Students
 */

int main() {
    char source[100], destination[100];

    printf("Enter a string to copy: ");
    fgets(source, sizeof(source), stdin);
    source[strcspn(source, "\n")] = 0; // Clean newline

    // strcpy(destination, source) copies source string to destination
    strcpy(destination, source);

    printf("Original (Source): %s\n", source);
    printf("Copied (Destination): %s\n", destination);

    return 0;
}

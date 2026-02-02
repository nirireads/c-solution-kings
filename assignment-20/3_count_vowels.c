#include <stdio.h>
#include <ctype.h>

/**
 * Program: Read a string and count the number of vowels in it.
 * Assignment: 20 - Question 3
 * Written for: 1st Year Bachelor Students
 */

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    printf("Number of vowels: %d\n", count);

    return 0;
}

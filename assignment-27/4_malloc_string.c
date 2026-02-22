#include <stdio.h>
#include <stdlib.h>

/**
 * Question 4: Ask the user how many characters they want to store, 
 * allocate that many chars using malloc(), take the string input, 
 * and display it.
 */

int main() {
    int n;
    char *str;

    printf("How many characters do you want to store? ");
    scanf("%d", &n);

    // Flush input buffer (to handle the newline character from scanf)
    getchar(); 

    // Allocate memory for n characters (+1 for null terminator)
    str = (char*)malloc((n + 1) * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the characters: ");
    // Using fgets for safer string input (up to n chars)
    fgets(str, n + 1, stdin);

    printf("\nThe stored string is: %s\n", str);

    free(str);
    return 0;
}

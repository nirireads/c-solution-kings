#include <stdio.h>
#include <stdlib.h>

/**
 * Question 4: Dynamically allocate memory for a string using malloc(). 
 * Ask the user to enter the length of the string first, 
 * then input and display the string.
 */

int main() {
    int len;
    char *str;

    printf("Enter the length of the string: ");
    scanf("%d", &len);

    // Clear buffer
    getchar();

    // Allocate len + 1 for null terminator
    str = (char*)malloc((len + 1) * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter your string: ");
    fgets(str, len + 1, stdin);

    printf("The entered string is: %s", str);

    free(str);
    return 0;
}

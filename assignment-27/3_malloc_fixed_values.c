#include <stdio.h>
#include <stdlib.h>

/**
 * Question 3: Allocate memory for 5 integers using malloc(), 
 * stores values 0, 10, 20, 30, 40, and prints the array.
 */

int main() {
    int *ptr;
    int i;

    // Allocate memory for 5 integers
    ptr = (int*)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Store values: 0, 10, 20, 30, 40
    for (i = 0; i < 5; i++) {
        ptr[i] = i * 10;
    }

    printf("Array elements stored using malloc:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
    return 0;
}

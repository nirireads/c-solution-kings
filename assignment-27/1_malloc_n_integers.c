#include <stdio.h>
#include <stdlib.h>

/**
 * Question 1: Allocate memory for N integers using malloc(). 
 * Input N from user, take N integers as input, and display them.
 */

int main() {
    int n, i;
    int *ptr;

    printf("Enter the number of integers (N): ");
    scanf("%d", &n);

    // Dynamic memory allocation using malloc
    ptr = (int*)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("\nThe entered integers are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(ptr);

    return 0;
}

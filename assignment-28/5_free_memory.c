#include <stdio.h>
#include <stdlib.h>

/**
 * Question 5: Allocate memory for N integers using malloc(),
 * then free the allocated memory using free(). 
 * Print a message after freeing the memory.
 */

int main() {
    int n;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Memory for %d integers allocated successfully.\n", n);

    // Free the memory
    free(ptr);
    
    printf("Memory has been successfully freed using free().\n");

    return 0;
}

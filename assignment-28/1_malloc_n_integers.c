#include <stdio.h>
#include <stdlib.h>

/**
 * Question 1: Allocate memory for N integers using malloc(). 
 * Input N numbers from the user and display them.
 */

int main() {
    int n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    ptr = (int*)malloc(n * sizeof(int));

    // Check if allocation failed
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &ptr[i]);
    }

    printf("The elements are: ");
    for (i = 0; i < n; ++i) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
    return 0;
}

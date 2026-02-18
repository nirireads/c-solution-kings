#include <stdio.h>
#include <stdlib.h>

/**
 * Question 2: Allocate memory for N integers using calloc(). 
 * Display the array elements immediately after allocation 
 * (before taking input) and explain what you observe.
 */

int main() {
    int n, i;
    int *ptr;

    printf("Enter the number of integers (N): ");
    scanf("%d", &n);

    // Dynamic memory allocation using calloc
    // calloc(number of elements, size of each element)
    ptr = (int*)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nDisplaying elements immediately after calloc() allocation:\n");
    for (i = 0; i < n; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    printf("\n--- Observation ---\n");
    printf("Observation: All elements are initialized to 0.\n");
    printf("Explanation: Unlike malloc(), calloc() initializes all allocated bytes to zero.\n");

    free(ptr);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

/**
 * Question 2: Allocate memory for N integers using calloc(). 
 * Display the elements before taking input and explain what you observe.
 */

int main() {
    int n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // calloc initializes elements to 0
    ptr = (int*)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Elements before taking input:\n");
    for (i = 0; i < n; ++i) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    printf("\nObservation: All elements are automatically initialized to 0 by calloc().\n");

    free(ptr);
    return 0;
}

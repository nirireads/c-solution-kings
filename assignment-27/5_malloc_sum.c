#include <stdio.h>
#include <stdlib.h>

/**
 * Question 5: Allocate memory for N integers using malloc(), 
 * calculate the sum of all elements, and print the sum.
 */

int main() {
    int n, i, sum = 0;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    printf("\nSum of all elements = %d\n", sum);

    free(ptr);
    return 0;
}

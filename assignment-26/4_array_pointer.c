#include <stdio.h>

/**
 * Question 4: Store 5 numbers in an array and print them using a pointer. 
 * (Do not use array indexing while printing.)
 */

int main() {
    int arr[5];
    int *ptr = arr;
    int i;

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        // Input using pointer arithmetic
        printf("Element %d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    printf("\nPrinting array elements using pointer:\n");
    for(i = 0; i < 5; i++) {
        // Output using pointer arithmetic (dereferencing)
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}

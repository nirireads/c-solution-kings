#include <stdio.h>

/**
 * Question 5: Change the value of a variable using a pointer.
 */

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Original value: %d\n", num);

    // Change value using pointer
    *ptr = 50;

    printf("Modified value using pointer: %d\n", num);
    printf("Value checked via pointer: %d\n", *ptr);

    return 0;
}

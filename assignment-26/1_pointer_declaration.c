#include <stdio.h>

/**
 * Question 1: Declare an integer variable and a pointer, 
 * assign the address of the variable to the pointer, 
 * and display the value using the pointer.
 */

int main() {
    int num = 100;    // Declare an integer variable
    int *ptr;         // Declare a pointer to an integer

    ptr = &num;       // Assign address of num to pointer ptr

    // Display value using the pointer
    printf("Value of num: %d\n", num);
    printf("Value of num (using pointer): %d\n", *ptr);

    return 0;
}

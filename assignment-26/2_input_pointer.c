#include <stdio.h>

/**
 * Question 2: Input a number and display the value and 
 * address of the number using a pointer.
 */

int main() {
    int num;
    int *ptr = &num;

    printf("Enter a number: ");
    scanf("%d", ptr); // Inputting directly into the address stored in ptr

    printf("\n--- Result ---\n");
    printf("Value of the number: %d\n", *ptr);
    printf("Address of the number: %p\n", (void*)ptr);

    return 0;
}

#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;

    // Store the address of the variable in the pointer
    ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);

    printf("\nDisplaying using pointer:\n");
    printf("Value: %d\n", *ptr);
    printf("Address: %p\n", (void*)ptr);

    return 0;
}

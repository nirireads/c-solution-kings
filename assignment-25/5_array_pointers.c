#include <stdio.h>

int main() {
    int arr[5], i;
    int *ptr = arr;

    printf("Enter 5 elements for the array:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", (ptr + i));
    }

    printf("\nArray elements accessed using pointers:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }

    return 0;
}

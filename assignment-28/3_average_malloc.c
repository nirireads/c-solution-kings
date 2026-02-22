#include <stdio.h>
#include <stdlib.h>

/**
 * Question 3: Dynamically allocate memory for 5 integers using malloc(). 
 * Store values entered by the user and print their average.
 */

int main() {
    int *ptr;
    int i, sum = 0;
    float avg;

    ptr = (int*)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    avg = (float)sum / 5;
    printf("\nAverage of the numbers = %.2f\n", avg);

    free(ptr);
    return 0;
}

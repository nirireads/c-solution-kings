#include <stdio.h>

/**
 * Program: 
 * 1. Void function to read array elements.
 * 2. Non-void function to return the sum of array elements.
 * Assignment: 22 - Question 2
 * Written for: 1st Year Bachelor Students
 */

// Function to read N elements into the array
// arrays are passed by reference in C
void readArray(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to calculate and return the sum
int calculateSum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n]; // VLA (Variable Length Array) supported since C99

    readArray(numbers, n);
    int sum = calculateSum(numbers, n);

    printf("The sum of array elements is: %d\n", sum);

    return 0;
}

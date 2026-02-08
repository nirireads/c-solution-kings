#include <stdio.h>

/**
 * Concept: To find the maximum without loops, we assume the maximum of the 
 * first (n-1) elements is already found, then compare it with the n-th element.
 * 
 * Recursive logic:
 * Max(array, n) = Comparing array[n-1] with Max(array, n-1)
 * Base Case: If array has only 1 element, that element is the Max.
 */
int find_max(int arr[], int n) {
    // Base case: only one element
    if (n == 1) {
        return arr[0];
    }
    
    // Recursive step: get max of smaller array
    int max_of_rest = find_max(arr, n - 1);
    
    // Compare and return
    return (arr[n-1] > max_of_rest) ? arr[n-1] : max_of_rest;
}

int main() {
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Greatest element in the array is: %d\n", find_max(arr, n));

    return 0;
}

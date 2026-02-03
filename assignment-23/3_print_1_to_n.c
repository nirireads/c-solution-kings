#include <stdio.h>

/**
 * Prints numbers from 1 to N using recursion.
 * To print from 1 to N, we call the function recursively for (n-1)
 * and THEN print the value of n. This is known as head recursion or 
 * simply utilizing the call stack to reverse the print order.
 */
void print_1_to_n(int n) {
    if (n <= 0) {
        return;
    }
    print_1_to_n(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    printf("Enter a number N: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n < 1) {
        printf("Please enter a number greater than 0.\n");
    } else {
        printf("Numbers from 1 to %d: ", n);
        print_1_to_n(n);
        printf("\n");
    }

    return 0;
}

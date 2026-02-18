#include <stdio.h>

/**
 * Question 3: Add two numbers using pointers.
 */

int main() {
    int a, b, sum;
    int *p1 = &a, *p2 = &b;

    printf("Enter two numbers: ");
    scanf("%d %d", p1, p2);

    sum = *p1 + *p2;

    printf("Sum of %d and %d is: %d\n", *p1, *p2, sum);

    return 0;
}

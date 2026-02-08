#include <stdio.h>

/**
 * Concept: To count digits, we "remove" one digit (divide by 10) and 
 * increment our count by 1. We continue until no digits are left.
 * 
 * Recursive logic:
 * countDig(n) = 1 + countDig(n / 10)
 * Base Case: If the number is less than 10, it has only 1 digit.
 */
int count_digits(int n) {
    // Handle negative numbers
    if (n < 0) n = -n;
    
    // Base case: Single digit
    if (n < 10) {
        return 1;
    }
    
    // Recursive Step
    return 1 + count_digits(n / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number of digits in %d is %d\n", num, count_digits(num));

    return 0;
}

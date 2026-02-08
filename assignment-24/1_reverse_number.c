#include <stdio.h>

/**
 * Concept: To reverse a number, we "move" digits from the end of the original 
 * number to the end of a new 'reversed' number.
 * 
 * Recursive logic:
 * reverse(number, current_reversed)
 * 1. Extract last digit: number % 10
 * 2. Update reversed: (current_reversed * 10) + last_digit
 * 3. Recursive call with: number / 10
 */
int reverse_recursive(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return reverse_recursive(num / 10, rev * 10 + (num % 10));
}

int main() {
    int num;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Reversed number: 0\n");
    } else {
        int result = reverse_recursive(num, 0);
        printf("Reversed number: %d\n", result);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Concept: A string is a palindrome if the first and last characters are the same
 * AND the remaining string in the middle is also a palindrome.
 * 
 * Recursive logic:
 * isPalindrome(start, end)
 * 1. If start index >= end index, we've checked everything (Base case: True)
 * 2. If char[start] != char[end], it's not a palindrome (Base case: False)
 * 3. Call isPalindrome(start + 1, end - 1)
 */
bool is_palindrome(char str[], int start, int end) {
    // Base Case 1: All characters compared or middle character reached
    if (start >= end) {
        return true;
    }
    
    // Base Case 2: Mismatch found
    if (str[start] != str[end]) {
        return false;
    }
    
    // Recursive Step
    return is_palindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (is_palindrome(str, 0, strlen(str) - 1)) {
        printf("'%s' is a palindrome.\n", str);
    } else {
        printf("'%s' is not a palindrome.\n", str);
    }

    return 0;
}

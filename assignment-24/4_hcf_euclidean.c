#include <stdio.h>

/**
 * Concept: The Euclidean Algorithm says that HCF(a, b) is the same as HCF(b, a % b).
 * We keep replacing the larger number with the remainder until the remainder is 0.
 * 
 * Recursive logic:
 * hcf(a, b) = hcf(b, a % b)
 * Base Case: When b becomes 0, the HCF is a.
 */
int calculate_hcf(int a, int b) {
    if (b == 0) {
        return a;
    }
    return calculate_hcf(b, a % b);
}

int main() {
    int n1, n2;
    printf("Enter two numbers to find HCF: ");
    scanf("%d %d", &n1, &n2);

    printf("HCF of %d and %d is %d\n", n1, n2, calculate_hcf(n1, n2));

    return 0;
}

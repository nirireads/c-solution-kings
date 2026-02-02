#include <stdio.h>

/**
 * Program: Non-void function that calculates simple interest.
 * Assignment: 22 - Question 4
 * Written for: 1st Year Bachelor Students
 */

// Using float for precision in monetary calculations
float calculateSI(float p, float t, float r) {
    return (p * t * r) / 100.0;
}

int main() {
    float principal, time, rate, interest;

    printf("Enter Principal: ");
    scanf("%f", &principal);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    printf("Enter Rate (%%): ");
    scanf("%f", &rate);

    interest = calculateSI(principal, time, rate);

    printf("Simple Interest = %.2f\n", interest);

    return 0;
}

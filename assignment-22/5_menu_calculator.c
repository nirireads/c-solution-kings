#include <stdio.h>

/**
 * Program: Void function for menu and non-void function for calculations.
 * Assignment: 22 - Question 5
 * Written for: 1st Year Bachelor Students
 */

// Function to display the user interface menu
void displayMenu() {
    printf("\n--- Simple Calculator ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Exit\n");
    printf("Choose an option: ");
}

// Function to perform calculation based on choice
float performCalculation(int choice, float a, float b) {
    switch (choice) {
        case 1: return a + b;
        case 2: return a - b;
        case 3: return a * b;
        case 4: 
            if (b != 0) return a / b;
            else {
                printf("Error: Division by zero!\n");
                return 0;
            }
        default: return 0;
    }
}

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        displayMenu();
        scanf("%d", &choice);

        if (choice == 5) break;
        if (choice < 1 || choice > 5) {
            printf("Invalid choice!\n");
            continue;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        result = performCalculation(choice, num1, num2);
        printf("Result: %.2f\n", result);
    }

    printf("Exiting program...\n");
    return 0;
}

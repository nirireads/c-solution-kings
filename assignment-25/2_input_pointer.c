#include <stdio.h>

int main() {
    int num;
    int *ptr = &num;

    printf("Enter a number: ");
    scanf("%d", ptr); // Reading directly using pointer

    printf("The value you entered is: %d\n", *ptr);

    return 0;
}

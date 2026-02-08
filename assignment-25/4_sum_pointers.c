#include <stdio.h>

int main() {
    int x, y, sum;
    int *p1 = &x;
    int *p2 = &y;
    int *pSum = &sum;

    printf("Enter two numbers: ");
    scanf("%d %d", p1, p2);

    *pSum = *p1 + *p2;

    printf("Sum of %d and %d is: %d\n", *p1, *p2, *pSum);

    return 0;
}

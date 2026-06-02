#include <stdio.h>

int main() {
    int base;
    int exp;
    int result = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    for (int i = 0; i < exp; i++) {
        result = result * base;
    }

    printf("Result: %d\n", result);

    return 0;
}
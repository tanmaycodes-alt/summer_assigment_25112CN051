#include <stdio.h>

int main() {
    int n;
    int rem;
    long bin = 0;
    long p = 1;

    printf("Enter decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 2;
        bin = bin + (rem * p);
        p = p * 10;
        n = n / 2;
    }

    printf("Binary: %ld\n", bin);

    return 0;
}

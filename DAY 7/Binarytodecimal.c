#include <stdio.h>

int main() {
    long bin;
    int dec = 0;
    int rem;
    int p = 1;

    printf("Enter binary number: ");
    scanf("%ld", &bin);

    while (bin > 0) {
        rem = bin % 10;
        dec = dec + (rem * p);
        p = p * 2;
        bin = bin / 10;
    }

    printf("Decimal: %d\n", dec);

    return 0;
}

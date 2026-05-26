#include <stdio.h>
#include <math.h>

int main() {
    int n, i, flag = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    if (n <= 1) {
        flag = 0;
    } else {
        // Optimized loop: check only up to the square root of n
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                flag = 0; // Found a divisor, so it's not prime
                break;
            }
        }
    }

    if (flag == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}

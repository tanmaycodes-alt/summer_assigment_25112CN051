#include <stdio.h>

int main() {
    int n,Prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    if (n <= 1) {
        Prime = 0;
    }

    // Check from 2 up to n/2
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            Prime = 0; 
            break;       
        }
    }

    // Output the result
    if (Prime == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}


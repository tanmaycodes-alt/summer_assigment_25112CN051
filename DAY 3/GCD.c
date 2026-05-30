#include <stdio.h>

int main() {
    int n1, n2, small, gcd;

    printf("Enter first number: ");
    scanf("%d", &n1);
    
    printf("Enter second number: ");
    scanf("%d", &n2);

    //  Find which number is smaller
    if (n1 < n2) {
        small = n1;
    } else {
        small = n2;
    }


    for (int i = 1; i <= small; i++) {
        if (n1 % i == 0) {
            if (n2 % i == 0) {
                gcd = i; 
            }
        }
    }

    printf("GCD is %d\n", gcd);

    return 0;
}

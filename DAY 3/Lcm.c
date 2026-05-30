#include <stdio.h>

int main() {
    int n1, n2, max;
    int A = 0;

    printf("Enter first number: ");
    scanf("%d", &n1);
    
    printf("Enter second number: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        max = n1;
    } else {
        max = n2;
    }

    while (A == 0) {
        if (max % n1 == 0) {
            if (max % n2 == 0) {
                printf("LCM is %d\n", max);
                A = 1;
            }
        }
        
        if (A == 0) {
            max++;
        }
    }

    return 0;
}

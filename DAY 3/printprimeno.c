#include <stdio.h>

int main() {
    int lower_range, upper_range,num,Prime;

    printf("Enter lower range and upper range: ");
    scanf("%d %d", &lower_range, &upper_range);

    for (int num = lower_range; num <= upper_range; num++) {
        if (num > 1) { // 0 and 1 are not prime
            int Prime = 1;

            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    Prime = 0;
                }
            }

            if (Prime == 1) {
                printf("%d ", num);
            }
        }
    }

    return 0;
}

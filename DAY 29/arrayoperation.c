#include <stdio.h>

int main()
{
    int a[100], n, i, choice;
    int sum = 0, max, min;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n1. Display Array\n");
    printf("2. Sum of Elements\n");
    printf("3. Largest Element\n");
    printf("4. Smallest Element\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            for(i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;

        case 2:
            for(i = 0; i < n; i++)
            {
                sum += a[i];
            }
            printf("Sum = %d", sum);
            break;

        case 3:
            max = a[0];

            for(i = 1; i < n; i++)
            {
                if(a[i] > max)
                {
                    max = a[i];
                }
            }

            printf("Largest Element = %d", max);
            break;

        case 4:
            min = a[0];

            for(i = 1; i < n; i++)
            {
                if(a[i] < min)
                {
                    min = a[i];
                }
            }

            printf("Smallest Element = %d", min);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
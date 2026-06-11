#include <stdio.h>

int main()
{
    int a[100], n, i, j = 0, temp[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            temp[j] = a[i];
            j++;
        }
    }

    while(j < n)
    {
        temp[j] = 0;
        j++;
    }

    printf("Array after moving zeroes to end:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}
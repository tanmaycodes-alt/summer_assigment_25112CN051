#include <stdio.h>

int main()
{
    int id[10], age[10], n, i;
    float salary[10];
    char name[10][50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &id[i]);

        printf("Enter Employee Name: ");
        scanf("%s", name[i]);

        printf("Enter Age: ");
        scanf("%d", &age[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    printf("\n----- Employee Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee ID: %d\n", id[i]);
        printf("Name: %s\n", name[i]);
        printf("Age: %d\n", age[i]);
        printf("Salary: %.2f\n", salary[i]);
    }

    return 0;
}
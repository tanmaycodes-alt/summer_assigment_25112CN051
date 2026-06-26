#include <stdio.h>

int main()
{
    int roll[10];
    char name[10][50];
    float marks[10];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll Number: %d\n", roll[i]);
        printf("Name: %s\n", name[i]);
        printf("Marks: %.2f\n", marks[i]);
    }

    return 0;
}
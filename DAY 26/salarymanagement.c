#include <stdio.h>

int main()
{
    int empid;
    char name[50];
    float basic, hra, da, salary;

    printf("Enter Employee ID: ");
    scanf("%d", &empid);

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;

    salary = basic + hra + da;

    printf("\nEmployee ID: %d\n", empid);
    printf("Employee Name: %s\n", name);
    printf("Basic Salary: %.2f\n", basic);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Total Salary: %.2f\n", salary);

    return 0;
}
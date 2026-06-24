#include <stdio.h>

struct Account
{
    int accno;
    char name[50];
    float balance;
};

int main()
{
    struct Account a;

    printf("Enter Account Number: ");
    scanf("%d", &a.accno);

    printf("Enter Account Holder Name: ");
    scanf("%s", a.name);

    printf("Enter Balance: ");
    scanf("%f", &a.balance);

    printf("\n--- Account Details ---\n");
    printf("Account Number: %d\n", a.accno);
    printf("Account Holder: %s\n", a.name);
    printf("Balance: %.2f\n", a.balance);

    return 0;
}
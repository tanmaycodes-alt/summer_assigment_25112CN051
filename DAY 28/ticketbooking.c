#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
};

int main()
{
    struct Ticket t;

    printf("Enter Ticket Number: ");
    scanf("%d", &t.ticketNo);

    printf("Enter Passenger Name: ");
    scanf("%s", t.name);

    printf("Enter Number of Seats: ");
    scanf("%d", &t.seats);

    printf("\n--- Ticket Details ---\n");
    printf("Ticket Number: %d\n", t.ticketNo);
    printf("Passenger Name: %s\n", t.name);
    printf("Seats Booked: %d\n", t.seats);

    return 0;
}
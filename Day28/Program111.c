// Program to create ticket booking system 
#include <stdio.h>
#include <string.h>

struct Ticket {
    int ticketId;
    char passengerName[50];
    char destination[50];
};

int main() {
    struct Ticket ticket[100];
    int n = 0, choice, i, id, found, j;

    do {
        printf("\n===== Ticket Management System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display All Tickets\n");
        printf("3. Search Ticket by Ticket ID\n");
        printf("4. Update Ticket Record\n");
        printf("5. Cancel Ticket\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter Ticket ID: ");
                scanf("%d", &ticket[n].ticketId);

                printf("Enter Passenger Name: ");
                scanf("%s", ticket[n].passengerName);

                printf("Enter Destination: ");
                scanf("%s", ticket[n].destination);

                n++;
                printf("Ticket booked successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("\nNo ticket records found.\n");
                } else {
                    printf("\n===== Ticket Records =====\n");
                    for (i = 0; i < n; i++) {
                        printf("\nTicket ID       : %d", ticket[i].ticketId);
                        printf("\nPassenger Name  : %s", ticket[i].passengerName);
                        printf("\nDestination     : %s\n", ticket[i].destination);
                    }
                }
                break;

            case 3:
                printf("\nEnter Ticket ID to search: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (ticket[i].ticketId == id) {
                        printf("\nTicket Found!\n");
                        printf("Ticket ID      : %d\n", ticket[i].ticketId);
                        printf("Passenger Name : %s\n", ticket[i].passengerName);
                        printf("Destination    : %s\n", ticket[i].destination);
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("Ticket not found.\n");

                break;

            case 4:
                printf("\nEnter Ticket ID to update: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (ticket[i].ticketId == id) {

                        printf("Enter New Passenger Name: ");
                        scanf("%s", ticket[i].passengerName);

                        printf("Enter New Destination: ");
                        scanf("%s", ticket[i].destination);

                        printf("Ticket updated successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("Ticket not found.\n");

                break;

            case 5:
                printf("\nEnter Ticket ID to cancel: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (ticket[i].ticketId == id) {

                        for (j = i; j < n - 1; j++) {
                            ticket[j] = ticket[j + 1];
                        }

                        n--;
                        printf("Ticket cancelled successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("Ticket not found.\n");

                break;

            case 6:
                printf("\nThank you for using the Ticket Management System!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}
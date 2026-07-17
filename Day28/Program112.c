// Program to create contact management system 
#include <stdio.h>
#include <string.h>

struct Contact {
    int id;
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contact[100];
    int n = 0, choice, i, id, found, j;

    do {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact by ID\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Contact ID: ");
                scanf("%d", &contact[n].id);

                printf("Enter Contact Name: ");
                scanf("%s", contact[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", contact[n].phone);

                n++;
                printf("Contact added successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("\nNo contacts found.\n");
                } else {
                    printf("\n===== Contact List =====\n");
                    for(i = 0; i < n; i++) {
                        printf("\nContact %d\n", i + 1);
                        printf("ID    : %d\n", contact[i].id);
                        printf("Name  : %s\n", contact[i].name);
                        printf("Phone : %s\n", contact[i].phone);
                    }
                }
                break;

            case 3:
                printf("\nEnter Contact ID to search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(contact[i].id == id) {
                        printf("\nContact Found!\n");
                        printf("ID    : %d\n", contact[i].id);
                        printf("Name  : %s\n", contact[i].name);
                        printf("Phone : %s\n", contact[i].phone);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Contact not found.\n");

                break;

            case 4:
                printf("\nEnter Contact ID to update: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(contact[i].id == id) {

                        printf("Enter New Name: ");
                        scanf("%s", contact[i].name);

                        printf("Enter New Phone Number: ");
                        scanf("%s", contact[i].phone);

                        printf("Contact updated successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Contact not found.\n");

                break;

            case 5:
                printf("\nEnter Contact ID to delete: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(contact[i].id == id) {

                        for(j = i; j < n - 1; j++) {
                            contact[j] = contact[j + 1];
                        }

                        n--;
                        printf("Contact deleted successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Contact not found.\n");

                break;

            case 6:
                printf("\nThank you for using the Contact Management System!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while(choice != 6);

    return 0;
}
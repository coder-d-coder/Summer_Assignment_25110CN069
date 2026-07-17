// Program to create student record system using arrays and strings
#include <stdio.h>
#include <string.h>

int main() {
    int roll[100], marks[100];
    char name[100][50];
    int n = 0, choice, i, searchRoll, found, j;

    do {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Student Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Update Student Record\n");
        printf("5. Delete Student Record\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter Roll Number: ");
                scanf("%d", &roll[n]);

                printf("Enter Student Name: ");
                scanf("%s", name[n]);

                printf("Enter Marks: ");
                scanf("%d", &marks[n]);

                n++;
                printf("Student record added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("\nNo student records found.\n");
                } else {
                    printf("\n===== Student Records =====\n");
                    for (i = 0; i < n; i++) {
                        printf("\nRoll Number : %d\n", roll[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Marks       : %d\n", marks[i]);
                    }
                }
                break;

            case 3:
                printf("\nEnter Roll Number to search: ");
                scanf("%d", &searchRoll);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (roll[i] == searchRoll) {
                        printf("\nStudent Found!\n");
                        printf("Roll Number : %d\n", roll[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Marks       : %d\n", marks[i]);
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("Student record not found.\n");

                break;

            case 4:
                printf("\nEnter Roll Number to update: ");
                scanf("%d", &searchRoll);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (roll[i] == searchRoll) {

                        printf("Enter New Name: ");
                        scanf("%s", name[i]);

                        printf("Enter New Marks: ");
                        scanf("%d", &marks[i]);

                        printf("Record updated successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("Student record not found.\n");

                break;

            case 5:
                printf("\nEnter Roll Number to delete: ");
                scanf("%d", &searchRoll);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (roll[i] == searchRoll) {

                        for (j = i; j < n - 1; j++) {
                            roll[j] = roll[j + 1];
                            strcpy(name[j], name[j + 1]);
                            marks[j] = marks[j + 1];
                        }

                        n--;
                        printf("Record deleted successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("Student record not found.\n");

                break;

            case 6:
                printf("\nThank you for using the Student Record System!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}
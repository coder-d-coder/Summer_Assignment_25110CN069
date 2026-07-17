// Program to create student record management system 
#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i, searchRoll, found;

    do {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nEnter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Name: ");
                scanf("%s", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Record added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("\nNo records found.\n");
                } else {
                    printf("\n--- Student Records ---\n");
                    for (i = 0; i < n; i++) {
                        printf("Roll: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                        printf("----------------------\n");
                    }
                }
                break;

            case 3:
                printf("\nEnter roll number to search: ");
                scanf("%d", &searchRoll);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (s[i].roll == searchRoll) {
                        printf("\nRecord Found!\n");
                        printf("Roll: %d\n", s[i].roll);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Record not found.\n");
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
#include <stdio.h>
#include <string.h>

struct Salary {
    int empId;
    char name[50];
    float basicSalary;
};

int main() {
    struct Salary emp[100], temp;
    int n = 0, choice, i, id, found;

    do {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Salary Record\n");
        printf("2. Display All Salary Records\n");
        printf("3. Search Salary Record by Employee ID\n");
        printf("4. Update Salary Record\n");
        printf("5. Delete Salary Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].empId);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &emp[n].basicSalary);

                n++;
                printf("Salary record added successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("\nNo records found.\n");
                } else {
                    printf("\n===== Salary Records =====\n");
                    for(i = 0; i < n; i++) {
                        printf("\nEmployee ID : %d", emp[i].empId);
                        printf("\nName        : %s", emp[i].name);
                        printf("\nSalary      : %.2f\n", emp[i].basicSalary);
                    }
                }
                break;

            case 3:
                printf("\nEnter Employee ID to search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(emp[i].empId == id) {
                        printf("\nRecord Found");
                        printf("\nEmployee ID : %d", emp[i].empId);
                        printf("\nName        : %s", emp[i].name);
                        printf("\nSalary      : %.2f\n", emp[i].basicSalary);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("\nRecord not found.\n");

                break;

            case 4:
                printf("\nEnter Employee ID to update: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(emp[i].empId == id) {
                        printf("Enter New Name: ");
                        scanf("%s", emp[i].name);

                        printf("Enter New Salary: ");
                        scanf("%f", &emp[i].basicSalary);

                        printf("Record updated successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Record not found.\n");

                break;

            case 5:
                printf("\nEnter Employee ID to delete: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(emp[i].empId == id) {
                        int j;
                        for(j = i; j < n - 1; j++) {
                            emp[j] = emp[j + 1];
                        }
                        n--;
                        printf("Record deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Record not found.\n");

                break;

            case 6:
                printf("\nExiting the program...\n");
                break;

            default:
                printf("\nInvalid Choice! Please try again.\n");
        }

    } while(choice != 6);

    return 0;
}
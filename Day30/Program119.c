// Program to create mini employee management system 
#include <stdio.h>
#include <string.h>

struct Employee {
    int empId;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, id, i, found, j;

    do {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Update Employee Record\n");
        printf("5. Delete Employee Record\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].empId);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Department: ");
                scanf("%s", emp[n].department);

                printf("Enter Salary: ");
                scanf("%f", &emp[n].salary);

                n++;
                printf("Employee added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("\nNo employee records found.\n");
                } else {
                    printf("\n===== Employee Records =====\n");
                    for (i = 0; i < n; i++) {
                        printf("\nEmployee ID : %d\n", emp[i].empId);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Department  : %s\n", emp[i].department);
                        printf("Salary      : %.2f\n", emp[i].salary);
                    }
                }
                break;

            case 3:
                printf("\nEnter Employee ID to search: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (emp[i].empId == id) {
                        printf("\nEmployee Found!\n");
                        printf("Employee ID : %d\n", emp[i].empId);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Department  : %s\n", emp[i].department);
                        printf("Salary      : %.2f\n", emp[i].salary);
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("Employee not found.\n");

                break;

            case 4:
                printf("\nEnter Employee ID to update: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (emp[i].empId == id) {

                        printf("Enter New Name: ");
                        scanf("%s", emp[i].name);

                        printf("Enter New Department: ");
                        scanf("%s", emp[i].department);

                        printf("Enter New Salary: ");
                        scanf("%f", &emp[i].salary);

                        printf("Employee record updated successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("Employee not found.\n");

                break;

            case 5:
                printf("\nEnter Employee ID to delete: ");
                scanf("%d", &id);

                found = 0;

                for (i = 0; i < n; i++) {
                    if (emp[i].empId == id) {

                        for (j = i; j < n - 1; j++) {
                            emp[j] = emp[j + 1];
                        }

                        n--;
                        printf("Employee record deleted successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("Employee not found.\n");

                break;

            case 6:
                printf("\nThank you for using the Mini Employee Management System!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}
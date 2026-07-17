// Program to develop complete mini project using arrays, string, and functions 
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Patient {
    int id;
    char name[50];
    int age;
    char disease[50];
};

struct Patient patient[MAX];
int n = 0;

// Function Prototypes
void addPatient();
void displayPatients();
void searchPatient();
void updatePatient();
void deletePatient();

int main() {
    int choice;

    do {
        printf("\n===== HOSPITAL MANAGEMENT SYSTEM =====\n");
        printf("1. Add Patient Record\n");
        printf("2. Display All Patients\n");
        printf("3. Search Patient by ID\n");
        printf("4. Update Patient Record\n");
        printf("5. Delete Patient Record\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addPatient();
                break;

            case 2:
                displayPatients();
                break;

            case 3:
                searchPatient();
                break;

            case 4:
                updatePatient();
                break;

            case 5:
                deletePatient();
                break;

            case 6:
                printf("\nThank you for using Hospital Management System.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

// Function to Add Patient
void addPatient() {
    printf("\nEnter Patient ID: ");
    scanf("%d", &patient[n].id);

    printf("Enter Patient Name: ");
    scanf("%s", patient[n].name);

    printf("Enter Age: ");
    scanf("%d", &patient[n].age);

    printf("Enter Disease: ");
    scanf("%s", patient[n].disease);

    n++;

    printf("Patient record added successfully.\n");
}

// Function to Display Patients
void displayPatients() {
    int i;

    if(n == 0) {
        printf("\nNo patient records found.\n");
        return;
    }

    printf("\n===== Patient Records =====\n");

    for(i = 0; i < n; i++) {
        printf("\nPatient %d\n", i + 1);
        printf("Patient ID : %d\n", patient[i].id);
        printf("Name       : %s\n", patient[i].name);
        printf("Age        : %d\n", patient[i].age);
        printf("Disease    : %s\n", patient[i].disease);
    }
}

// Function to Search Patient
void searchPatient() {
    int id, i, found = 0;

    printf("\nEnter Patient ID to search: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++) {
        if(patient[i].id == id) {
            printf("\nPatient Found\n");
            printf("ID      : %d\n", patient[i].id);
            printf("Name    : %s\n", patient[i].name);
            printf("Age     : %d\n", patient[i].age);
            printf("Disease : %s\n", patient[i].disease);

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Patient not found.\n");
}

// Function to Update Patient
void updatePatient() {
    int id, i, found = 0;

    printf("\nEnter Patient ID to update: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++) {
        if(patient[i].id == id) {

            printf("Enter New Name: ");
            scanf("%s", patient[i].name);

            printf("Enter New Age: ");
            scanf("%d", &patient[i].age);

            printf("Enter New Disease: ");
            scanf("%s", patient[i].disease);

            printf("Record updated successfully.\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Patient not found.\n");
}

// Function to Delete Patient
void deletePatient() {
    int id, i, j, found = 0;

    printf("\nEnter Patient ID to delete: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++) {
        if(patient[i].id == id) {

            for(j = i; j < n - 1; j++) {
                patient[j] = patient[j + 1];
            }

            n--;

            printf("Patient record deleted successfully.\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Patient not found.\n");
}
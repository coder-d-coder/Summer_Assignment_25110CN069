// Program to create a marksheet generation system
#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter marks in Subject 1: ");
    scanf("%f", &m1);

    printf("Enter marks in Subject 2: ");
    scanf("%f", &m2);

    printf("Enter marks in Subject 3: ");
    scanf("%f", &m3);

    printf("Enter marks in Subject 4: ");
    scanf("%f", &m4);

    printf("Enter marks in Subject 5: ");
    scanf("%f", &m5);

    // Calculate total and percentage
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    // Determine grade
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    // Display Marksheet
    printf("\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Student Name: %s\n", name);
    printf("-------------------------------\n");
    printf("Subject 1 : %.2f\n", m1);
    printf("Subject 2 : %.2f\n", m2);
    printf("Subject 3 : %.2f\n", m3);
    printf("Subject 4 : %.2f\n", m4);
    printf("Subject 5 : %.2f\n", m5);
    printf("-------------------------------\n");
    printf("Total Marks: %.2f / 500\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    if (grade == 'F')
        printf("Result     : Fail\n");
    else
        printf("Result     : Pass\n");

    return 0;
}
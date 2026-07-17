// Program to create menu driven string operations system 
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice, result;

    do {
        printf("\n===== STRING OPERATIONS SYSTEM =====\n");
        printf("1. Enter String\n");
        printf("2. Find Length of String\n");
        printf("3. Reverse String\n");
        printf("4. Compare Two Strings\n");
        printf("5. Concatenate Two Strings\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("String stored successfully.\n");
                break;

            case 2:
                printf("Length of the string = %lu\n", strlen(str1));
                break;

            case 3:
                strcpy(temp, str1);
                strrev(temp);   // Works in Turbo C/CodeBlocks (may not work in GCC)

                printf("Reversed String = %s\n", temp);
                break;

            case 4:
                printf("Enter second string: ");
                scanf("%s", str2);

                result = strcmp(str1, str2);

                if(result == 0)
                    printf("Both strings are equal.\n");
                else
                    printf("Strings are not equal.\n");

                break;

            case 5:
                printf("Enter second string: ");
                scanf("%s", str2);

                strcpy(temp, str1);
                strcat(temp, str2);

                printf("Concatenated String = %s\n", temp);

                break;

            case 6:
                printf("Exiting the program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 6);

    return 0;
}
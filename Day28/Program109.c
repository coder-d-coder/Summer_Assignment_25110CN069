// program to create library management sysytem 
#include <stdio.h>
#include <string.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
};

int main() {
    struct Book book[100];
    int n = 0, choice, i, id, found, j;

    do {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book Record\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Update Book Record\n");
        printf("5. Delete Book Record\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &book[n].bookId);

                printf("Enter Book Title: ");
                scanf("%s", book[n].title);

                printf("Enter Author Name: ");
                scanf("%s", book[n].author);

                n++;
                printf("Book record added successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("\nNo book records found.\n");
                } else {
                    printf("\n===== Book Records =====\n");
                    for (i = 0; i < n; i++) {
                        printf("\nBook ID : %d", book[i].bookId);
                        printf("\nTitle   : %s", book[i].title);
                        printf("\nAuthor  : %s\n", book[i].author);
                    }
                }
                break;

            case 3:
                printf("\nEnter Book ID to search: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (book[i].bookId == id) {
                        printf("\nBook Found!\n");
                        printf("Book ID : %d\n", book[i].bookId);
                        printf("Title   : %s\n", book[i].title);
                        printf("Author  : %s\n", book[i].author);
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("Book not found.\n");

                break;

            case 4:
                printf("\nEnter Book ID to update: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (book[i].bookId == id) {

                        printf("Enter New Title: ");
                        scanf("%s", book[i].title);

                        printf("Enter New Author: ");
                        scanf("%s", book[i].author);

                        printf("Book record updated successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("Book not found.\n");

                break;

            case 5:
                printf("\nEnter Book ID to delete: ");
                scanf("%d", &id);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (book[i].bookId == id) {

                        for (j = i; j < n - 1; j++) {
                            book[j] = book[j + 1];
                        }

                        n--;
                        printf("Book record deleted successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("Book not found.\n");

                break;

            case 6:
                printf("\nThank you for using the Library Management System!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 6);

    return 0;
}
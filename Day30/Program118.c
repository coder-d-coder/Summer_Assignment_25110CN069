// Program to create mini library system 
#include <stdio.h>
#include <string.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
    int issued;   // 0 = Available, 1 = Issued
};

int main() {
    struct Book book[100];
    int n = 0, choice, id, i, found;

    do {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by Book ID\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &book[n].bookId);

                printf("Enter Book Title: ");
                scanf("%s", book[n].title);

                printf("Enter Author Name: ");
                scanf("%s", book[n].author);

                book[n].issued = 0;
                n++;

                printf("Book added successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("\nNo books available.\n");
                } else {
                    printf("\n===== Book List =====\n");

                    for(i = 0; i < n; i++) {
                        printf("\nBook ID : %d", book[i].bookId);
                        printf("\nTitle   : %s", book[i].title);
                        printf("\nAuthor  : %s", book[i].author);

                        if(book[i].issued == 0)
                            printf("\nStatus  : Available\n");
                        else
                            printf("\nStatus  : Issued\n");
                    }
                }
                break;

            case 3:
                printf("\nEnter Book ID to search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(book[i].bookId == id) {
                        printf("\nBook Found!\n");
                        printf("Book ID : %d\n", book[i].bookId);
                        printf("Title   : %s\n", book[i].title);
                        printf("Author  : %s\n", book[i].author);

                        if(book[i].issued == 0)
                            printf("Status  : Available\n");
                        else
                            printf("Status  : Issued\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");

                break;

            case 4:
                printf("\nEnter Book ID to issue: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(book[i].bookId == id) {

                        if(book[i].issued == 0) {
                            book[i].issued = 1;
                            printf("Book issued successfully.\n");
                        } else {
                            printf("Book is already issued.\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");

                break;

            case 5:
                printf("\nEnter Book ID to return: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(book[i].bookId == id) {

                        if(book[i].issued == 1) {
                            book[i].issued = 0;
                            printf("Book returned successfully.\n");
                        } else {
                            printf("Book is already available.\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.\n");

                break;

            case 6:
                printf("\nThank you for using the Mini Library System!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while(choice != 6);

    return 0;
}
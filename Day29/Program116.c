// Prorgram to create inventory management system
#include <stdio.h>
#include <string.h>

struct Product {
    int productId;
    char productName[50];
    int quantity;
    float price;
};

int main() {
    struct Product product[100];
    int n = 0, choice, i, id, found, j;

    do {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Product\n");
        printf("2. Display All Products\n");
        printf("3. Search Product by ID\n");
        printf("4. Update Product\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Product ID: ");
                scanf("%d", &product[n].productId);

                printf("Enter Product Name: ");
                scanf("%s", product[n].productName);

                printf("Enter Quantity: ");
                scanf("%d", &product[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &product[n].price);

                n++;
                printf("Product added successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("\nNo products available.\n");
                } else {
                    printf("\n===== Product List =====\n");
                    for(i = 0; i < n; i++) {
                        printf("\nProduct %d\n", i + 1);
                        printf("Product ID   : %d\n", product[i].productId);
                        printf("Product Name : %s\n", product[i].productName);
                        printf("Quantity     : %d\n", product[i].quantity);
                        printf("Price        : %.2f\n", product[i].price);
                    }
                }
                break;

            case 3:
                printf("\nEnter Product ID to search: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(product[i].productId == id) {
                        printf("\nProduct Found!\n");
                        printf("Product ID   : %d\n", product[i].productId);
                        printf("Product Name : %s\n", product[i].productName);
                        printf("Quantity     : %d\n", product[i].quantity);
                        printf("Price        : %.2f\n", product[i].price);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Product not found.\n");

                break;

            case 4:
                printf("\nEnter Product ID to update: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(product[i].productId == id) {

                        printf("Enter New Product Name: ");
                        scanf("%s", product[i].productName);

                        printf("Enter New Quantity: ");
                        scanf("%d", &product[i].quantity);

                        printf("Enter New Price: ");
                        scanf("%f", &product[i].price);

                        printf("Product updated successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Product not found.\n");

                break;

            case 5:
                printf("\nEnter Product ID to delete: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++) {
                    if(product[i].productId == id) {

                        for(j = i; j < n - 1; j++) {
                            product[j] = product[j + 1];
                        }

                        n--;
                        printf("Product deleted successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Product not found.\n");

                break;

            case 6:
                printf("\nThank you for using the Inventory Management System!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while(choice != 6);

    return 0;
}
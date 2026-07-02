// Program to Transpose Matrix
#include <stdio.h>
// Function to find the transpose of a matrix
void transposeMatrix(int a[10][10], int transpose[10][10], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[10][10], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], transpose[10][10];
    int rows, cols, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    displayMatrix(a, rows, cols);

    transposeMatrix(a, transpose, rows, cols);

    printf("\nTranspose of the Matrix:\n");
    displayMatrix(transpose, cols, rows);

    return 0;
}
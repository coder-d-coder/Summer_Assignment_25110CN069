// Program to Subtract matrices
#include <stdio.h>
// Function to subtract two matrices
void subMatrices(int a[10][10], int b[10][10], int sub[10][10], int rows, int cols)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
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
    int a[10][10], b[10][10], sub[10][10];
    int rows, cols, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    subMatrices(a, b, sub, rows, cols);
    printf("\nThe difference of the two matrices is:\n");
    displayMatrix(sub, rows, cols);
    return 0;
}
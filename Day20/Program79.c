// Program to find row wise sum 
#include <stdio.h>
void rowWiseSum(int matrix[10][10], int rows, int cols)
{
    int i, j, sum;

    for (i = 0; i < rows; i++)
    {
        sum = 0;
        for (j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }
}

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
    int matrix[10][10];
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
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is : \n");
    displayMatrix(matrix, rows, cols);

    printf("\nRow-wise Sum:\n");
    rowWiseSum(matrix, rows, cols);

    return 0;
}
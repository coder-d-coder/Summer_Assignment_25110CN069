// Program to find column wise sum  
#include <stdio.h>
void colWiseSum(int matrix[10][10], int rows, int cols)
{
    int i, j, sum;

    for (j = 0; j < cols; j++)
    {
        sum = 0;
        for (i = 0; i < rows; i++)
        {
            sum += matrix[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, sum);
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

    printf("\nColumn-wise Sum:\n");
    colWiseSum(matrix, rows, cols);

    return 0;
}
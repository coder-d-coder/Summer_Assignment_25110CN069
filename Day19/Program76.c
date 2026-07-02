// Program to find the diagonal sum of a matrix
#include <stdio.h>
// Function to calculate the diagonal sum
int diagonalSum(int matrix[10][10], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + matrix[i][i];
    }

    return sum;
}

// Function to display a matrix
void displayMatrix(int matrix[10][10], int order)
{
    int i, j;
    for (i = 0; i < order; i++)
    {
        for (j = 0; j < order; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[10][10];
    int n, i, j, sum;
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nEntered Matrix :\n");
    displayMatrix(matrix, n);

    sum = diagonalSum(matrix, n);
    printf("\nThe sum of the principal diagonal elements = %d\n", sum);

    return 0;
}
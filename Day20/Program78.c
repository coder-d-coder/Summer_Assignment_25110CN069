// Program to check symmetric matrix
#include <stdio.h>

int isSymmetric( int a[10][10], int n)
{  
    
    int i, j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (a[i][j] != a[j][i])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int a[10][10], n, i, j;
    printf("Enter the order of the matrix : ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix :\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (isSymmetric(a, n))
    {
        printf("The matrix is symmetric\n");
    }
    else
    {
        printf("The matrix is not symmetric\n");
    }    
    return 0;
}


// Program to print the pyramid pattern with numbers
#include <stdio.h>
int main()
{
    int n, i,j,k;
    printf("Enter  the number of rows: ");
    scanf("%d", &n);

     for (i=1; i<=n; i++)
    {
        // print spaces
        for (j=1; j<=n-i; j++)
        {
            printf("  ");
        }

        // print increasing numbers
        for (j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        // print decreasing numbers
        for (j=i-1; j>=1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
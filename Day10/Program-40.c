// Program to print the pyramid pattern with letters
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

        // print increasing letters
        for (j=1; j<=i; j++)
        {
            printf("%c ", j + 64); // Convert number to corresponding uppercase letter
        }
        // print decreasing letters
        for (j=i-1; j>=1; j--)
        {
            printf("%c ", j + 64); // Convert number to corresponding uppercase letter
        }
        printf("\n");
    }
    return 0;
}
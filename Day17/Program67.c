// Program to find the intersection of the two arrays
#include <stdio.h>
#define max 1001
int main()
{
    int n1, n2, i, j;
    int hash[max] = {0};

    printf("Enter the size of the first array :");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elemenets of the first array :\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array :");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elemenets of the second array :\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Store elements of the first array
    for (i = 0; i < n1; i++)
    {
        hash[arr1[i]] = 1;
    }
    printf("\nIntersection of the arrays :\n");
    for (i = 0; i < n2; i++)
    {
        if (hash[arr2[i]] == 1)
        {
            printf("%d ", arr2[i]);
            hash[arr2[i]] = 0;
        }
    }

    return 0;
}

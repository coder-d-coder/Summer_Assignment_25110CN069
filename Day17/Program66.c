// Program to find the union of arrays
#include <stdio.h>
#define max 1001
int main()
{
    int n1, n2, i, j;
    int visited[max] = {0};

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

    printf("\nUnnion of arrays :\n");

    for (i = 0; i < n1; i++)
    {
        if (visited[arr1[i]] == 0)
        {
            printf("%d ", arr1[i]);
            visited[arr1[i]] = 1;
        }
    }

    for (i = 0; i < n2; i++)
    {
        if (visited[arr2[i]] == 0)
        {
            printf("%d ", arr2[i]);
            visited[arr2[i]] = 1;
        }
    }

    return 0;
}
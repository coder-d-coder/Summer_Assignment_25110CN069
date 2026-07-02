// Program to merge arrays
#include <stdio.h>
int main()
{
    int n1, n2, i, j;
    // First Array
    printf("Enter the number of elements in the first array :");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elemenets of the first array :");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    // Second Array
    printf("Enter the number of elements in the second array :");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elemenets of the second array :");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int merge[n1 + n2];
    // Copy first array
    for (i = 0; i < n1; i++)
    {
        merge[i] = arr1[i];
    }
    // Copy second array
    for (i = 0; i < n2; i++)
    {
        merge[n1 + i] = arr2[i];
    }
    printf("Merged array : ");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merge[i]);
    }

    return 0;
}
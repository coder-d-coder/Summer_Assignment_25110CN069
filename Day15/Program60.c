// Program to move zeroes to the end in an array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr, n, i;
    printf("Enter the number of elements in the array :");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory Allocation Failed");
        return 1;
    }
    printf("Enter the elements of the array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int j = -1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    // no zero numbers
    if (j == -1)
    {
        printf("No zeroes found in the array");
        return 0;
    }

    for (i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            // Swap
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }
    printf("The modifies array is :");
    for (i=0;i<n;i++)
    {
        printf("%d, ",arr[i]);
    }

    free(arr);

    return 0;
}
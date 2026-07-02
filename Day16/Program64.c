// Program to remove duplicates from the array
#include <stdio.h>
int main()
{
    int n, i, j, sum;
    printf("Enter the number of elemenets in the array :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                // left shift elements
                for (int k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array after removing dublicate elements :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
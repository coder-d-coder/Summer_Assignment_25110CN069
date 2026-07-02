// Program to rotate the array right
#include <stdio.h>

void rightshift(int arr[100], int n, int d)
{
    d = d % n;
    int temp[100];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[n - d + i];
    }
    for (int i = n - d - 1; i >= 0; i--)
    {
        arr[i + d] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[100], n, d, i;
    printf("Enter the number of elements in the array :");
    scanf("%d", &n);
    printf("Enter the elements of the array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of places to be shifted in the right direction :");
    scanf(" %d", &d);
    printf("Input array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    rightshift(arr, n, d);
    printf("Final array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
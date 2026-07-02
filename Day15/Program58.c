// Program to rotate the array left
#include <stdio.h>

void leftshift(int arr[100], int n, int d)
{
    d = d % n;
    int temp[100];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n - d; i++)
    {
        arr[i] = arr[d + i];
    }
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
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
    printf("Enter the number of places to be shifted in the left direction :");
    scanf(" %d", &d);
    leftshift(arr, n, d);
    printf("Final array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
// Program to implement linear search 
#include <stdio.h>
void linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("Element found at index: %d\n", i);
            return;
        }
    }
    printf("Element not found in the array.\n");
}

int main()
{
    int arr[100], n, key;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    linearsearch(arr, n, key);

    return 0;
}
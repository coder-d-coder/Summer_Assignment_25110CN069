// Program to reverse an array
#include <stdio.h>
int main()
{
    int arr[100], n, i, reverse[100];
    printf("Enter the number of elements int the array:");
    scanf("%d", &n);
    printf("Enter the elements of the array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (i = n - 1; i >= 0; i--)
    {
        reverse[n - 1 - i] = arr[i];
    }

    printf("Reversed array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", reverse[i]);
    }

    return 0;
}
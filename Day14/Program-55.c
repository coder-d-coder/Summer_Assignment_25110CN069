// Program to find the second largest element in an array
#include <stdio.h>
int main()
{
    int arr[100], n, largest = 0, second_largest = 0;
    printf("Enter the number of elements in the array :");
    scanf("%d", &n);
    printf("Enter the elements of the array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }
    if (second_largest == 0)
    {
        printf("There is no second largest element in the array.\n");
    }
    else
    {
        printf("The second largest element in the array is: %d\n", second_largest);
    }
    return 0; 
}

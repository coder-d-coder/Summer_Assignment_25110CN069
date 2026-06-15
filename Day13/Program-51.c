// Program to find the largest and smallest element in an array
#include <stdio.h>
int main()
{
    int arr[100], size, i;
    printf("Enter the number of elements :");
    scanf("%d", &size);
    printf("Enter the elements :");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int smallest = arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("Largest element is : %d\n", largest);
    printf("Smallest element is : %d\n", smallest);
    return 0;
}
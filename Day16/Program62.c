// Program to find the maximum frequency element in the array
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of elememts in the array :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxFrequency = 0;
    int maxElement;

    for (i = 0; i < n; i++)
    {
        int count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxFrequency)
        {
            maxFrequency = count;
            maxElement = arr[i];
        }
    }
    printf("Maximum Frequency element : %d\n", maxElement);
    printf("Frequency : %d\n", maxFrequency);

    return 0;
}
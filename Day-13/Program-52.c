// Program to count the number of even and odd elements in an array
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

    int evenCount = 0;
    int oddCount = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    printf("Number of even elements is : %d\n", evenCount);
    printf("Number of odd elements is : %d\n", oddCount);
    return 0;
}
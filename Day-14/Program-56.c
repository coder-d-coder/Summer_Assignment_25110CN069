// Program to find duplicate elements in an array and their frequencies
#include <stdio.h>

int main()
{
    int arr[100], n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int visited[100] = {0};

    printf("\nDuplicate elements and their frequencies:\n");

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 1)
            continue;

        int count = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        if (count > 1)
        {
            printf("%d occurs %d times\n", arr[i], count);
        }
    }

    return 0;
}
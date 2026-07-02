// Program to Find a pair with a given sum
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
    printf("Enter the given sum :");
    scanf("%d", &sum);
    int found = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("Pair found : %d + %d = %d\n", arr[i], arr[j], sum);
                found = 1;
            }
        }
    }
    if (found = 0)
    {
        printf("No pair found with the given sum");
    }

    return 0;
}
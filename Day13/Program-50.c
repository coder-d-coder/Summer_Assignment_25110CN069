// Program
#include <stdio.h>
int main()
{
    int arr[100], i, n, sum = 0, avg;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = sum / n;
    printf("The sum of the elements of the array is: %d\n", sum);
    printf("The average of the elements of the array is: %d\n", avg);
    return 0;
}
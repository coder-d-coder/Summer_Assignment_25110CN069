// Program to find the missing element in an array
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of elements in the array :");
    scanf("%d", &n);
    int arr[n - 1];
    int sum = 0;
    printf("Enter %d elements of the array :", n - 1);
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int total = n * (n + 1) / 2;
    int num = total - sum;
    printf("The missing number is %d:",num);

    return 0;
}
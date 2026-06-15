// Program to find the frequency of an element in an array
#include <stdio.h>
int main()
{
    int arr[100], n, key;
    printf("Enter the number of elements in the array :");
    scanf("%d", &n);
    printf("Enter the elements of the array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter an  element whose frequency is to be found :");
    scanf("%d", &key);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }
    printf("Frequency of %d is: %d\n", key, count);
    return 0;
}
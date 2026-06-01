// Program to print all the factors of a given number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factors of %d are: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            if (i < n)
                printf(", ");
        }
    }
    return 0;
}
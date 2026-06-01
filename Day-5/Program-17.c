// Program to check whether a number is perfect or not
//Perfect number is a positive integer that is equal to the sum of its proper divisors, excluding itself. For example, 6 is a perfect number because its proper divisors are 1, 2, and 3, and their sum is 6 (1 + 2 + 3 = 6). Another example is 28, which has proper divisors of 1, 2, 4, 7, and 14, and their sum is also 28 (1 + 2 + 4 + 7 + 14 = 28). Perfect numbers have been studied for centuries and have interesting properties in number theory.
#include <stdio.h>
int main()
{
    int n, sum = 0, i;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("%d is a perfect number.", n);
    }
    else
    {
        printf("%d is not a perfect number.", n);
    }
    return 0;
}
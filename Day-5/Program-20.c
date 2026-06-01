// Program to find the largest prime factor of a given number
#include <stdio.h>

int main()
{
    int n, largestPrimeFactor = -1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Remove all factors of 2
    while (n % 2 == 0)
    {
        largestPrimeFactor = 2;
        n /= 2;
    }

    // Check odd factors from 3 onwards
    for (int i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            largestPrimeFactor = i;
            n /= i;
        }
    }

    // If n is still greater than 2, then n itself is prime
    if (n > 2)
    {
        largestPrimeFactor = n;
    }

    printf("Largest prime factor = %d\n", largestPrimeFactor);

    return 0;
}
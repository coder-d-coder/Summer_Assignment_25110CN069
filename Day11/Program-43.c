// Program to check if a number is prime using function
#include <stdio.h>
int isprime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isprime(num))
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);
    return 0;
}
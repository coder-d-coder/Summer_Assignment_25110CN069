// Program to check if a number is an Armstrong number
#include <stdio.h>
void armstrong(int n)
{
    int digits = 0;
    int temp = n;
    while (temp > 0)
    {
        temp = temp / 10;
        digits++;
    }
    int original = n, sum = 0, rem;
    while (n > 0)
    {
        rem = n % 10;
        int power = 1;
        for (int i = 0; i < digits; i++)
        {
            power *= rem;
        }
        sum += power;
        n = n / 10;
    }
    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    armstrong(n);
    return 0;
}

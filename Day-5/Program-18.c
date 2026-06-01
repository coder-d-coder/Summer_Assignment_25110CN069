// Program to check whether a number is a strong number or not
//Strong numbers are those numbers whose sum of the factorial of their digits is equal to the original number. For example, 145 is a strong number because 1! + 4! + 5! = 1 + 24 + 120 = 145. Another example is 2, which is a strong number because 2! = 2. Strong numbers are relatively rare and have interesting properties in number theory.
#include <stdio.h>
int main()
{
    int n, fact = 1, sum = 0, i, rem;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int originalnum = n;
    while (n > 0)
    {
        rem = n % 10;
        fact = 1;
        for (i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        n = n / 10;
    }
    if (sum == originalnum)
    {
        printf("The number is a strong number.");
    }
    else
    {
        printf("The number is not a strong number.");
    }

    return 0;
}
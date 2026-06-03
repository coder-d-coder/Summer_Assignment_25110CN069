// Program to find sum of digits of a number using recursion
#include <stdio.h>
int sumofdigits(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return (num % 10) + sumofdigits(num / 10);
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is: %d\n", num, sumofdigits(num));
    return 0;
}
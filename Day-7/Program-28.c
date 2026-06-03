// Program to reverse a number using recursion
#include <stdio.h>
#include <math.h>

int reverse(int num, int rev)
{
    if (num == 0)
    {
        return rev;
    }
    else
    {
        return reverse(num / 10, rev*10 + (num % 10));
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed number is: %d\n", reverse(num, 0));
    return 0;
}

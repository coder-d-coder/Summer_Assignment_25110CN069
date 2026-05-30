// Program to find the gcd of two numbers
#include <stdio.h>
int main()
{
    int n1, n2, temp;
    printf("Enter two positive numbers:");
    scanf("%d %d", &n1, &n2);
    while (n2 != 0)
    {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    printf("GCD = %d", n1);
    return 0;
}
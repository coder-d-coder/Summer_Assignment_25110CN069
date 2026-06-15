//Program to find the maximum of two numbers using function
#include <stdio.h>

int findMaximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y, maximum;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    maximum = findMaximum(x, y);
    printf("Maximum = %d", maximum);
    return 0;
}

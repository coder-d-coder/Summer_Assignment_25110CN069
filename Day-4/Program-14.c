// Program to find the nth term of the Fibonacci series
#include <stdio.h>
int fibonacciterm(int n)
{
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
            return a;
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    printf("Enter the term number: ");
    scanf("%d", &n);
    int result = fibonacciterm(n);
    printf("The %dth term of the Fibonacci series is: %d\n", n, result);
    return 0;
}
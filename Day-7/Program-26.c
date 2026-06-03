// Program to find Fibonacci series using recursion
#include <stdio.h>
int fibonacci(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Fibonacci series up to %d terms:\n", num);
    for (int i = 0; i < num; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

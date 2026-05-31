// Program to generate Fibonacci series up to n terms
#include <stdio.h>
void fibonacci(int n)
{
    int a = 0, b = 1, c;
    printf("Fibonacci series upto %d terms: ", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d", a);
        c = a + b;
        a = b;
        b = c;
        if (i < n)
            printf(", ");
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
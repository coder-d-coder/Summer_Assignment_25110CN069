// Program to calculate the power of a number using a loop
#include <stdio.h>
int main()
{
    int num, power, result = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &power);

    for (int i = 1; i <= power; i++)
    {
        result *= num; // Multiply num by itself power times
    }
    printf("Result: %d\n", result);
    return 0;
}
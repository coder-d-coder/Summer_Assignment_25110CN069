// Program to convert binary into decimal
#include <stdio.h>
int main()
{
    int num, decimalnum = 0, base = 1, rem;
    printf("Enter a binary number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Decimal number: 0");
        return 0;
    }
    while (num > 0)
    {
        rem = num % 10;
        decimalnum = decimalnum + rem * base;
        num = num / 10;
        base = base * 2;
    }
    printf("Decimal number: %d\n", decimalnum);
    return 0;
}
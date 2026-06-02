// Program to convert decimal into binary
#include <stdio.h>
int main()
{
    int num, binaryNum[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Binary number: 0");
        return 0;
    }

    while (num > 0)
    {
        binaryNum[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary number: ");
    // Print in reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binaryNum[j]);
    }
    return 0;
}
// Program to count set bits in a number
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        count += num & 1; // Increment count if the last bit is set
        num >>= 1;        // Right shift the bits by 1
    }
    printf("Number of set bits: %d\n", count);
    return 0;
}
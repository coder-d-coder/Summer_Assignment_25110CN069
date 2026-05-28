// Program to count digits in a number
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter the digits:");
    scanf("%d", &num);
    int temp = num;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    printf("Number of digits in %d is:%d", num, count);

    return 0;
}
// Program to check if a number is armstrong using function
#include <stdio.h>
void isarmstrong(int num)
{
    int sum = 0, rem, temp;
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }
    if (num == sum)
        printf("%d is an armstrong number.\n", num);
    else
        printf("%d is not an armstrong number.\n", num);
}

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    isarmstrong(num);
    return 0;
}
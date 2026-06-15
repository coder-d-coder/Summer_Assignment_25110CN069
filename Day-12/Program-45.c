// Program to check if a number is palindrome using function
#include <stdio.h>
void ispalindrome(int num)
{
    int rev = 0, rem, temp;
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }
    if (num == rev)
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);
}

int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    ispalindrome(num);
    return 0;
}
// Program to print armstrong numbers in a given range
#include <stdio.h>
void armstrong(int n1, int n2)
{
    int digits, temp, sum, rem;
    for (int i = n1; i <= n2; i++)
    {
        digits = 0;
        temp = i;
        // counting digits
        while (temp > 0)
        {
            temp = temp / 10;
            digits++;
        }
        // checking if the number is an Armstrong number
        temp = i;
        sum = 0;
        while (temp > 0)
        {
            rem = temp % 10;
            int power = 1;
            for (int i = 0; i < digits; i++)
            {
                power *= rem;
            }
            sum += power;
            temp /= 10;
        }
        if (sum == i)
        {
            printf("%d, ", i);
        }
    }
}
int main()
{
    int n1, n2;
    printf("Enter the range (n1 n2): ");
    scanf("%d %d", &n1, &n2);
    printf("Armstrong numbers between %d and %d are: ", n1, n2);
    aermstrong(n1, n2);
    return 0;
}
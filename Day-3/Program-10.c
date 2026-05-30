// Program to print prime number in a range
#include <stdio.h>
int main()
{
    int i, j, lower, upper, flag;
    printf("Enter the lower limit:");
    scanf("%d", &lower);
    printf("Enter the upper limit:");
    scanf("%d", &upper);
    printf("Prime numbers between %d and %d are: ", lower, upper);
    for (i = lower; i <= upper; i++)
    {
        if (i <= 1)
            continue;
        flag = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("%d ", i);
    }
    return 0;
}

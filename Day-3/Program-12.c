#include <stdio.h>
int main()
{
    int n1, n2, temp, i;
    printf("Enter two positive numbers:");
    scanf("%d %d", &n1, &n2);
    for (i = 1; i <= n2; i++)
    {
        temp = n1 * i;
        if (temp % n2 == 0)
        {
            printf("LCM = %d", temp);
            break;
        }
    }
    return 0;
}

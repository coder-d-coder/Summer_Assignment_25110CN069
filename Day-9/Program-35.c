// Program to print repeated character half pyramid pattern
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    char ch = 'A';
    for (i = 1; i <= n; i++)
    {
        
        for (j = 1; j <= i; j++)
        {
            
            printf("%c ", ch);
            
        }
        ch++;
        printf("\n");
    }
    return 0;
}

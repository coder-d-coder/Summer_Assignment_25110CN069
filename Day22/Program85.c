// Prorgram to check palindrome string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, length, flag = 1;

    printf("Enter a string: ");
    gets(str);

    length = strlen(str);

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is Not a Palindrome.\n");

    return 0;
}
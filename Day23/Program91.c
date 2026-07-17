// Program to check anagram string
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int i, j, len1, len2, found;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2)
    {
        printf("The strings are not anagrams.\n");
        return 0;
    }

    for (i = 0; i < len1; i++)
    {
        found = 0;

        for (j = 0; j < len2; j++)
        {
            if (str1[i] == str2[j])
            {
                str2[j] = '*';   // Mark character as used
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams.\n");

    return 0;
}
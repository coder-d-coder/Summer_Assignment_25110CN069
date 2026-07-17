// Program to count words in sentence
#include <stdio.h>
int main()
{
    char str[100];
    int i, words = 0;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] != ' ' && str[i] != '\n') && (i == 0 || str[i - 1] == ' '))
        {
            words++;
        }
    }
    printf("Number of words = %d\n", words);
    
    return 0;
}
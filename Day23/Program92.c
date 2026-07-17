// Program to maximum occurance character
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, length;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    length = strlen(str);

    int maxFrequency = 0;
    char maxCharacter;

    for (i = 0; i < length; i++)
    {
        int count = 1;
        for (j = i+1; j< length ; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count > maxFrequency)
        {
            maxFrequency = count;
            maxCharacter = str[i];
        }
    }
    printf("Maximum occurance character : %c\n", maxCharacter);
    printf("Frequency : %d\n", maxFrequency);

    return 0;
}
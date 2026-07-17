#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[100], longest[100];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if (j > max) {
                max = j;
                strcpy(longest, word);
            }

            j = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", max);

    return 0;
}
// Program to sort words by length 
#include <stdio.h>
#include <string.h>
int main() {
    char str[200], words[50][50], temp[50];
    int i, j = 0, k = 0, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            words[count][j++] = str[i];
        } else {
            words[count][j] = '\0';
            count++;
            j = 0;
        }
    }

    // Sort words by length
    for (i = 0; i < count - 1; i++) {
        for (k = i + 1; k < count; k++) {
            if (strlen(words[i]) > strlen(words[k])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[k]);
                strcpy(words[k], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for (i = 0; i < count; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
// Program to find common characaters un strings
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Common characters are: ");

    for (i = 0; str[i] != '\0'; i++) {
        int count = 1;

        for (j = 0; j < i; j++) {
            if (str[i] == str[j])
                break;
        }

        if (j != i)
            continue;

        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j])
                count++;
        }

        if (count > 1)
            printf("%c ", str[i]);
    }

    return 0;
}
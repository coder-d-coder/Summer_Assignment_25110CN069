// Program to check string rotation
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Lengths must be equal
    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation.\n");
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        printf("'%s' is a rotation of '%s'.\n", str2, str1);
    else
        printf("'%s' is not a rotation of '%s'.\n", str2, str1);

    return 0;
}
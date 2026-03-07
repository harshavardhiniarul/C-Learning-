#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    printf("Length: %lu\n", strlen(str1));

    strcpy(str3, str1);
    printf("Copied: %s\n", str3);

    strcat(str1, str2);
    printf("Concatenated: %s\n", str1);

    printf("Compare result: %d\n", strcmp(str2, str3));
    return 0;
}
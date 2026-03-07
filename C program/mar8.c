#include <stdio.h>
int main()
{
    char s1[50], s2[50], s3[50];
    int i = 0, len1 = 0, len2 = 0, equal = 1;
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    i = 0;
    while (s1[i] != '\0')
    {
        s3[i] = s1[i];
        i++;
    }
    s3[i] = '\0';

    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
        {
            equal = 0;
            break;
        }
    }
    printf("Length1 = %d\nLength2 = %d\nCopied = %s\n", len1, len2, s3);
    printf("%s\n", equal ? "Strings are equal" : "Strings are not equal");

    return 0;
}
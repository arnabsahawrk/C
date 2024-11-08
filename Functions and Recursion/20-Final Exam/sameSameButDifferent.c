#include <stdio.h>
int main()
{
    char str1[101], str2[101], str3[101];
    scanf("%s %s %s", str1, str2, str3);
    int count = 0;

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
            count++;

        if (str1[i] != str3[i])
            count++;
    }

    printf("%d", count);
    return 0;
}
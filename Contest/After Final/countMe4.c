#include <stdio.h>
int main()
{
    int countAlpha[26] = {0};
    char str[10001];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
        countAlpha[str[i] - 'a']++;

    for (int j = 0; j < 26; j++)
    {
        if (countAlpha[j] > 0)
            printf("%c - %d\n", j + 'a', countAlpha[j]);
    }
    return 0;
}
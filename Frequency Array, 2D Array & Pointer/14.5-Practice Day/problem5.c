#include <stdio.h>
int frequencyStr[25];
int main()
{
    int n;
    scanf("%d", &n);
    char str[n + 1];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
        frequencyStr[str[i] - 'a']++;

    for (int i = 0; i <= 25; i++)
    {
        if (frequencyStr[i] > 0)
            printf("%c", 'a' + i);
    }

    return 0;
}
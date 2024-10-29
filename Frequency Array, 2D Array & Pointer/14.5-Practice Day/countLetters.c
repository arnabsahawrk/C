#include <stdio.h>
int frequencyStr[25];
int main()
{
    char str[10000001];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
        frequencyStr[str[i] - 'a']++;

    for (int i = 0; i <= 25; i++)
    {
        if (frequencyStr[i] > 0)
            printf("%c : %d\n", 'a' + i, frequencyStr[i]);
    }

    return 0;
}
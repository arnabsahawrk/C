#include <stdio.h>

int main()
{
    char s[1001];
    scanf("%s", s);

    int freqS[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        freqS[s[i] - 'a']++;
    }

    int oddCount = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freqS[i] % 2 != 0)
        {
            oddCount++;
        }
    }

    int minDeletions = oddCount > 0 ? oddCount - 1 : 0;

    printf("%d\n", minDeletions);
    return 0;
}

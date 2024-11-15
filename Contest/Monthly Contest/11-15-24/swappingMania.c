#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001], t[1001];
    scanf("%s %s", s, t);

    if (strlen(s) != strlen(t))
    {
        printf("NO");
        return 0;
    }

    int freqS[26] = {0}, freqT[26] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        freqS[s[i] - 'a']++;
        freqT[t[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freqS[i] != freqT[i])
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
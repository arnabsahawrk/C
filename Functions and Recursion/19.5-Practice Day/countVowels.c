#include <stdio.h>
void countVowels(char *str, int i, int *count)
{
    if (str[i] == '\0')
        return;

    if ((str[i] == 'a' || str[i] == 'A') || (str[i] == 'e' || str[i] == 'E') || (str[i] == 'i' || str[i] == 'I') || (str[i] == 'o' || str[i] == 'O') || (str[i] == 'u' || str[i] == 'U'))
        (*count)++;

    countVowels(str, i + 1, count);
}
int main()
{
    char theString[201];
    scanf("%[^\n]s", &theString);
    int vowelCount = 0;

    countVowels(theString, 0, &vowelCount);

    printf("%d", vowelCount);
    return 0;
}
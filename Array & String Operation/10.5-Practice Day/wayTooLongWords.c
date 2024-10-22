#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%s", str);
        int strLength = strlen(str);
        if (strLength > 10)
        {
            for (int j = 0; str[j] != '\0'; j++)
            {
                if (j == 0)
                    printf("%c%d", str[j], strLength - 2);
                else if (str[j + 1] == '\0')
                    printf("%c\n", str[j]);
            }
        }
        else
        {
            printf("%s\n", str);
        }
    }
    return 0;
}
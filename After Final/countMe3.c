#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char str[10001];
        scanf("%s", str);
        int capitalAlpha = 0, smallAlpha = 0, digits = 0;

        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                capitalAlpha++;
            else if (str[i] >= 'a' && str[i] <= 'z')
                smallAlpha++;
            else
                digits++;
        }
        printf("%d %d %d\n", capitalAlpha, smallAlpha, digits);
    }

    return 0;
}
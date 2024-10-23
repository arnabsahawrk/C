#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char strA[21], strB[21];
    scanf("%s %s", strA, strB);

    int i = 0;
    while (1)
    {
        if (strA[i] == '\0' && strB[i] == '\0')
        {
            printf("%s", strA);
            break;
        }
        else if (strA[i] == '\0')
        {
            printf("%s", strA);
            break;
        }
        else if (strB[i] == '\0')
        {
            printf("%s", strB);
            break;
        }
        else if (strA[i] > strB[i])
        {
            printf("%s", strB);
            break;
        }
        else if (strA[i] < strB[i])
        {
            printf("%s", strA);
            break;
        }
        else
            i++;
    }

    return 0;
}
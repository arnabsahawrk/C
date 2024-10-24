#include <stdio.h>
#include <string.h>
int main()
{
    char strA[1001], strB[1001], strC[1001];
    scanf("%s %s %s", strA, strB, strC);

    if (strcmp(strA, strB) >= 0 && strcmp(strA, strC) >= 0)
    {
        if (strcmp(strB, strC) <= 0)
            printf("%s\n%s", strB, strA);
        else
            printf("%s\n%s", strC, strA);
    }
    else if (strcmp(strA, strB) <= 0 && strcmp(strA, strC) <= 0)
    {
        if (strcmp(strB, strC) >= 0)
            printf("%s\n%s", strA, strB);
        else
            printf("%s\n%s", strA, strC);
    }
    else
    {
        if (strcmp(strB, strC) >= 0)
            printf("%s\n%s", strC, strB);
        else
            printf("%s\n%s", strB, strC);
    }
    return 0;
}
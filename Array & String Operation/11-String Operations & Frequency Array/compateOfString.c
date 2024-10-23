#include <stdio.h>
#include <string.h>
int main()
{
    char strA[20] = "AHelloP";
    char strB[20] = "CHello";

    /* int cmp = 0, length = 0;

    if (strlen(strA) > strlen(strB))
        length = strlen(strB);
    else
        length = strlen(strA);

    for (int i = 0; i < length; i++)
    {
        if (strA[i] != strB[i])
        {
            cmp = strA[i] - strB[i];
            break;
        }
    }

    if (cmp > 0)
    {
        printf("A String Is Greater");
    }
    else if (cmp < 0)
    {
        printf("B String Is Greater");
    }
    else
    {
        if (strlen(strA) > strlen(strB))
            printf("A String Is Greater");
        else if (strlen(strA) < strlen(strB))
            printf("B String Is Greater");
        else
            printf("Strings Are Equal");
    } */

    int cmp = strcmp(strA, strB);

    if (cmp > 0)
        printf("A String Is Greater");
    else if (cmp < 0)
        printf("B String Is Greater");
    else
        printf("Strings Are Equal");
}
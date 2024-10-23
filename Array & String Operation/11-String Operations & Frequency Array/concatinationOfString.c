#include <stdio.h>
#include <string.h>
int main()
{
    char strA[20] = "Hello ";
    char strB[20] = "World";

    printf("%s\n%s\n", strA, strB);
    printf("\n");

    /*int strALength = strlen(strA);
    int strBLength = strlen(strB);

    int totalLength = strALength + strBLength;

    for (int i = strALength, j = 0; j < strBLength; i++, j++)
    {
        strA[i] = strB[j];
    }

    strA[totalLength] = '\0'; */

    strcat(strA, strB);

    printf("%s\n%s\n", strA, strB);
    return 0;
}
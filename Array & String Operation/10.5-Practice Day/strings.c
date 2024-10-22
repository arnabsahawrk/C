#include <stdio.h>
#include <string.h>

int main()
{
    char strA[11], strB[11];
    scanf("%s %s", strA, strB);

    int strALength = strlen(strA), strBLength = strlen(strB);

    printf("%d %d\n", strALength, strBLength);
    printf("%s%s\n", strA, strB);

    char temp = strA[0];
    strA[0] = strB[0];
    strB[0] = temp;
    printf("%s %s\n", strA, strB);
    return 0;
}
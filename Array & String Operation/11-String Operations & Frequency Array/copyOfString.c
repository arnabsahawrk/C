#include <stdio.h>
#include <string.h>

int main()
{

    char strA[20] = "Hello";
    char strB[20] = "Hello World";

    printf("%s\n%s\n", strA, strB);
    printf("\n");

    /* for (int i = 0; strB[i] != '\0'; i++)
    {
        strA[i] = strB[i];
    }

    strA[strlen(strB)] = '\0'; */

    strcpy(strA, strB);

    printf("%s\n%s\n", strA, strB);

    return 0;
}
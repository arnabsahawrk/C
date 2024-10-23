#include <stdio.h>
#include <string.h>

int main()
{
    char str[20] = "Hello World";

    /* for (int i = 0, j = strlen(str) - 1; i < j; i++, j--)
     {
         char temp = str[i];
         str[i] = str[j];
         str[j] = temp;
     } */

    strrev(str);

    printf("%s", str);
    return 0;
}
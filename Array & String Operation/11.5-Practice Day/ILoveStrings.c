#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        char strA[51], strB[51], strAB[101];
        scanf("%s %s", strA, strB);

        int i = 0, j = 0, ij = 0;
        while (strA[i] != '\0' || strB[j] != '\0')
        {
            if (strA[i] != '\0')
            {
                strAB[ij] = strA[i];
                ij++;
                i++;
            }

            if (strB[j] != '\0')
            {
                strAB[ij] = strB[j];
                ij++;
                j++;
            }
        }
        strAB[ij] = '\0';
        printf("%s\n", strAB);
    }

    return 0;
}
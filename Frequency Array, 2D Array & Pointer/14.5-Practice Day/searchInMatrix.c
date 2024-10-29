#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, m, searchValue;
    scanf("%d %d", &n, &m);

    int twoDarray[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%d", &twoDarray[i][j]);
    }

    scanf("%d", &searchValue);

    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (twoDarray[i][j] == searchValue)
            {
                found = true;
                break;
            }
        }
        if (found)
        {
            printf("will not take number");
            break;
        }
    }

    if (!found)
        printf("will take number");
    return 0;
}
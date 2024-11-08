#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    if (n != m)
    {
        printf("NO");
    }
    else
    {
        int jaduMatrix[n][m];
        bool jadu = true;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                scanf("%d", &jaduMatrix[i][j]);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j && jaduMatrix[i][j] != 1)
                {
                    jadu = false;
                    break;
                }
                else if (i + j == n - 1 && jaduMatrix[i][j] != 1)
                {
                    jadu = false;
                    break;
                }
                else if ((i != j && i + j != n - 1) && jaduMatrix[i][j] != 0)
                {
                    jadu = false;
                    break;
                }
            }
            if (!jadu)
                break;
        }

        if (jadu)
            printf("YES");
        else
            printf("NO");
    }
    return 0;
}
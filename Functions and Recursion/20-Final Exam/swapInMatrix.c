#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int swapMatrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%d", &swapMatrix[i][j]);
    }

    for (int i = 0; i < n; i++)
    {
        int temp = swapMatrix[i][0];
        swapMatrix[i][0] = swapMatrix[i][m - 1];
        swapMatrix[i][m - 1] = temp;
    }

    for (int j = 0; j < m; j++)
    {
        int temp = swapMatrix[0][j];
        swapMatrix[0][j] = swapMatrix[n - 1][j];
        swapMatrix[n - 1][j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", swapMatrix[i][j]);

        printf("\n");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int array[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%d", &array[i][j]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int peakCell = array[i][j];
            int isPeak = 1;

            if ((i > 0 && array[i - 1][j] >= peakCell) ||
                (i < n - 1 && array[i + 1][j] >= peakCell) ||
                (j > 0 && array[i][j - 1] >= peakCell) ||
                (j < m - 1 && array[i][j + 1] >= peakCell))
            {
                isPeak = 0;
            }

            if (isPeak)
            {
                printf("%d %d\n", i + 1, j + 1);
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}

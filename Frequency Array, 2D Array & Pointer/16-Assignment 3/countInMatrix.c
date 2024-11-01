#include <stdio.h>
int main()
{
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);

    int matrix[n][m];
    int frequencyOfDigits[1001] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
            frequencyOfDigits[matrix[i][j]]++;
        }
    }

    while (x--)
    {
        int digit;
        scanf("%d", &digit);
        printf("%d\n", frequencyOfDigits[digit]);
    }

    return 0;
}
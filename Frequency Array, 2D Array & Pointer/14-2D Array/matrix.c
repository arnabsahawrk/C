#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    int array[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    int primaryDiagonal = 0, secondaryDiagonal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primaryDiagonal += array[i][j];
            }

            if (i + j == n - 1)
            {
                secondaryDiagonal += array[i][j];
            }
        }
    }

    printf("%d", abs(primaryDiagonal - secondaryDiagonal));

    return 0;
}
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);

    int matrix[n][n];
    bool isUnitMatrix = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);

            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0))
                isUnitMatrix = false;
        }
    }

    if (isUnitMatrix)
        printf("YES");
    else
        printf("NO");
    return 0;
}
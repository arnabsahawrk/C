#include <stdio.h>
#include <stdbool.h>
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

    bool isScaler = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (array[i][j] != array[0][0])
                {
                    isScaler = false;
                    break;
                }
            }
            else
            {
                if (array[i][j] != 0)
                {
                    isScaler = false;
                    break;
                }
            }
        }

        if (!isScaler)
            break;
    }

    if (isScaler)
    {
        printf("Scaler");
    }
    else
    {
        printf("Not Scaler");
    }

    return 0;
}

/*
1. Diagonal Value Is Equal
2. Another Value Is Zero
*/
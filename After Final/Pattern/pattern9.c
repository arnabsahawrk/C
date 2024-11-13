#include <stdio.h>
int main()
{
    int n, row, col;
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = n; col >= row; col--)
        {
            if (col % 2 == 0)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");
    }
    return 0;
}
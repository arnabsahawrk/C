#include <stdio.h>
int main()
{
    int n, row, col;
    scanf("%d", &n);

    for (row = 0; row < n; row++)
    {
        for (col = 0; col <= row; col++)
        {
            printf("%c ", col + 'A');
        }
        printf("\n");
    }
    return 0;
}
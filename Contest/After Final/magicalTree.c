#include <stdio.h>
int main()
{
    int n, row, col;
    scanf("%d", &n);

    int num = 5 + n / 2 + 1;

    for (row = 0; row < num; row++)
    {
        for (col = 0; col < num - row - 1; col++)
            printf(" ");
        for (col = 0; col < 2 * row + 1; col++)
            printf("*");
        printf("\n");
    }

    for (row = 0; row < 5; row++)
    {
        for (col = 0; col < 5; col++)
            printf(" ");

        for (col = 0; col < n; col++)
            printf("*");

        printf("\n");
    }
    return 0;
}
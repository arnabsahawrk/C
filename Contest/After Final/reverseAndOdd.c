#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    for (int j = n - 1; j >= 1; j--)
    {
        if (j % 2 == 0)
            continue;

        printf("%d ", array[j]);
    }
}
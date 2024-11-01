#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *array = (int *)malloc(1 * sizeof(int));
    int n;
    scanf("%d", &n);
    array = (int *)realloc(array, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", array + i);
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] > 0)
        {
            array[i] = 1;
        }
        else if (array[i] < 0)
        {
            array[i] = 2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
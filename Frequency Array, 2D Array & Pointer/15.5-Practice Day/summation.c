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

    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }

    if (sum > 0)
    {
        printf("%lld", sum);
    }
    else
    {
        printf("%lld", sum * (-1));
    }
    return 0;
}
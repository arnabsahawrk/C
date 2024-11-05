#include <stdio.h>

int Max(int *array, int len)
{
    int maxValue = array[0];

    for (int i = 0; i < len; i++)
    {
        if (array[i] > maxValue)
            maxValue = array[i];
    }

    return maxValue;
}

int MIN(int *array, int len)
{
    int minValue = array[0];

    for (int i = 0; i < len; i++)
    {
        if (array[i] < minValue)
            minValue = array[i];
    }

    return minValue;
}

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("%d %d", MIN(array, n), Max(array, n));
}
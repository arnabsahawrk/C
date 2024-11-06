#include <stdio.h>
int maxNumber(int *array, int n, int maxValue)
{
    if (n < 0)
        return maxValue;

    if (array[n] > maxValue)
    {
        maxValue = array[n];
        return maxNumber(array, n - 1, maxValue);
    }
    else
    {
        return maxNumber(array, n - 1, maxValue);
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    printf("%d", maxNumber(array, n - 1, array[0]));
}
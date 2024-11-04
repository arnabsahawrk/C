#include <stdio.h>
int array[10000];

int sumArray(int i, int len)
{
    if (i == len)
        return 0;

    return array[i] + sumArray(i + 1, len);
}
int main()
{
    int length;
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }

    int sum = sumArray(0, length);
    printf("%d", sum);

    return 0;
}
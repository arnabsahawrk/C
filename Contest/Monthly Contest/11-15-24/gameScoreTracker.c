#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    int minScore = array[0], maxScore = array[0], minCount = 0, maxCount = 0;

    for (int i = 1; i < n; i++)
    {
        if (minScore > array[i])
        {
            minScore = array[i];
            minCount++;
        }
        else if (maxScore < array[i])
        {
            maxScore = array[i];
            maxCount++;
        }
    }

    printf("%d %d", maxCount, minCount);
    return 0;
}
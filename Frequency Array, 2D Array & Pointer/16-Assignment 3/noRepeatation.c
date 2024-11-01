#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    int uniqueNumber[100001] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        uniqueNumber[array[i]]++;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (uniqueNumber[array[i]] == 1)
            count++;
    }

    printf("%d", count);

    return 0;
}
#include <stdio.h>
int frequencyNumber[100001] = {0};
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];

    int i = 0, count = 0;
    while (n--)
    {
        scanf("%d", &array[i]);
        if (frequencyNumber[array[i]] == 0)
            count++;
        frequencyNumber[array[i]]++;
        i++;
    }

    printf("%d", count);

    return 0;
}
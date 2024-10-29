#include <stdio.h>

int frequencyArray[100001] = {0};
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        frequencyArray[array[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", frequencyArray[i]);
    }
}
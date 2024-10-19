#include <stdio.h>
#include <string.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int array[n], frequencyArray[m];

    memset(frequencyArray, 0, sizeof(frequencyArray));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);

        frequencyArray[array[i] - 1]++;
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", frequencyArray[i]);
    }

    return 0;
}
#include <stdio.h>

int frequencyArray[100001] = {0};
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        frequencyArray[array[i]]++;
    }

    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);

        if (frequencyArray[x])
            printf("%d found, %d times\n", x, frequencyArray[x]);
        else
            printf("%d not found\n", x);
    }
    return 0;
}
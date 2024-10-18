#include <stdio.h>
#include <limits.h>
int main()
{
    int n, min = INT_MAX, frequency = 0;
    scanf("%d", &n);
    int array[n];

    // find the minimum number
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);

        if (array[i] < min)
            min = array[i];
    }

    // find the frequency of minimum number
    for (int i = 0; i < n; i++)
        if (array[i] == min)
            frequency++;

    // find the frequency of minimum number odd/even
    if (frequency & 1)
        printf("Lucky");
    else
        printf("Unlucky");
    return 0;
}
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int salamiArray[N];
    int maxValue = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &salamiArray[i]);
        if (salamiArray[i] > maxValue)
            maxValue = salamiArray[i];
    }

    for (int i = 0; i < N; i++)
    {
        salamiArray[i] = maxValue - salamiArray[i];
        printf("%d ", salamiArray[i]);
    }
    return 0;
}
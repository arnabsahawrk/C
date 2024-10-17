#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int zeroAndOneArray[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &zeroAndOneArray[i]);
    }

    int toggleValue;
    scanf("%d", &toggleValue);

    if (zeroAndOneArray[toggleValue - 1])
        zeroAndOneArray[toggleValue - 1] = 0;
    else
        zeroAndOneArray[toggleValue - 1] = 1;

    for (int i = 0; i < N; i++)
    {
        printf("%d ", zeroAndOneArray[i]);
    }
    return 0;
}
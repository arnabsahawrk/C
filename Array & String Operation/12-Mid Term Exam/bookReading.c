#include <stdio.h>
int main()
{
    int N, T;
    scanf("%d %d", &N, &T);

    int sum = 0, count = 0;
    for (int i = 0; i < N; i++)
    {
        int time;
        scanf("%d", &time);

        sum += time;
        if (sum <= T)
            count++;
    }

    printf("%d", count);
    return 0;
}
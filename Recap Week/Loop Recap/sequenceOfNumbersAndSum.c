#include <stdio.h>
int main()
{
    int M, N;

    while (1)
    {
        scanf("%d %d", &M, &N);

        if (M <= 0 || N <= 0)
            break;
        else if (M > N)
        {
            int temp = M;
            M = N;
            N = temp;
        }

        int sum = 0;
        for (int i = M; i <= N; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("sum =%d\n", sum);
    }

    return 0;
}
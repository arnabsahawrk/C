#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int zero = 0, one = 0;

    for (int i = 0; i < N; i++)
    {
        int zeroOrOne;
        scanf("%d", &zeroOrOne);

        if (zeroOrOne)
            one++;
        else
            zero++;
    }

    printf("%d %d", zero, one);
    return 0;
}
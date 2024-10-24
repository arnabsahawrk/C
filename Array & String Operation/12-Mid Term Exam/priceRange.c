#include <stdio.h>
int main()
{
    int N, X, Y;
    scanf("%d %d %d", &N, &X, &Y);

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        int price;
        scanf("%d", &price);

        if (price >= X && price <= Y)
            count++;
    }

    printf("%d", count);
    return 0;
}
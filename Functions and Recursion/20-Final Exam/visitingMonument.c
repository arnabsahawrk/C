#include <stdio.h>

void increasingOrder(int n)
{
    if (n == 0)
        return;

    increasingOrder(n - 1);
    printf("%d ", n);
}

void decreasingOrder(int n)
{
    if (n == 0)
        return;

    printf("%d ", n);
    decreasingOrder(n - 1);
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        increasingOrder(n);
        decreasingOrder(n - 1);
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

void max(int a, int b, int c, int *max)
{
    if (a >= b && a >= c)
        *max = a;
    else if (b >= a && b >= c)
        *max = b;
    else
        *max = c;
}

void min(int a, int b, int c, int *min)
{
    if (a <= b && a <= c)
        *min = a;
    else if (b <= a && b <= c)
        *min = b;
    else
        *min = c;
}

int main()
{
    int a, b, c, minNumb, maxNumb;
    scanf("%d %d %d", &a, &b, &c);

    min(a, b, c, &minNumb);
    max(a, b, c, &maxNumb);

    printf("%d %d", minNumb, maxNumb);
    return 0;
}
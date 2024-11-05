#include <stdio.h>

void nToOne(int n)
{
    if (n == 0)
        return;

    if (n == 1)
        printf("%d", n);
    else
        printf("%d ", n);
    nToOne(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    nToOne(n);
}
#include <stdio.h>

void swap()
{
    long long int x, y;
    scanf("%lld %lld", &x, &y);

    int temp = x;
    x = y;
    y = temp;

    printf("%lld %lld", x, y);
}

int main()
{
    swap();
    return 0;
}
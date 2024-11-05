#include <stdio.h>

void add()
{
    long long int x, y;
    scanf("%lld %lld", &x, &y);

    printf("%lld", x + y);
}

int main()
{
    add();
    return 0;
}
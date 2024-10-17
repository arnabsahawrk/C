#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int sum = (1LL * (n + 1) * n) / 2;

    printf("%lld", sum);
    return 0;
}
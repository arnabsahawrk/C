#include <stdio.h>
long long int logTwo(long long int n)
{
    if (n <= 1)
        return 0;

    return 1 + logTwo(n / 2);
}
int main()
{
    long long int log;
    scanf("%lld", &log);

    printf("%lld", logTwo(log));
    return 0;
}
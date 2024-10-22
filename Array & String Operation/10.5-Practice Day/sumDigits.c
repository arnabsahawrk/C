#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    char strDigits[N + 1];
    scanf("%s", strDigits);

    long long int sum = 0;
    for (int i = 0; i < N; i++)
    {
        int digit = strDigits[i] - '0';
        sum += digit;
    }

    printf("%lld", sum);

    return 0;
}
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    long long int summation = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        summation += A[i];
    }

    if (summation < 0)
    {
        printf("%lld", summation * (-1));
    }
    else
    {
        printf("%lld", summation);
    }

    return 0;
}
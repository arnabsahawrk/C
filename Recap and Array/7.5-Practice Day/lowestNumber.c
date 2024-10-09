#include <stdio.h>
#include <limits.h>
int main()
{
    unsigned short int N;
    scanf("%hu", &N);

    int A[N], lowestNumber = INT_MAX, position = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] < lowestNumber)
        {
            lowestNumber = A[i];
            position = i;
        }
    }

    printf("%d %d", lowestNumber, position + 1);
}
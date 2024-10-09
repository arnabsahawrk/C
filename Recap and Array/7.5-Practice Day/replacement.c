#include <stdio.h>
int main()
{
    unsigned short int N;
    scanf("%hu", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);

        if (A[i] != 0)
        {
            if (A[i] > 0)
                A[i] = 1;
            else
                A[i] = 2;
        }

        printf("%d ", A[i]);
    }
    return 0;
}
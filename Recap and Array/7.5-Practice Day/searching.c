#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int X;
    scanf("%d", &X);

    int exist = -1;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == X)
        {
            exist = i;
            break;
        }
    }
    printf("%d", exist);
    return 0;
}
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        if (m == 0)
        {
            printf("0\n");
        }
        else
        {
            long long int theThreeNumbers = a * b * c;
            if (theThreeNumbers > m)
            {
                printf("-1\n");
            }
            else
            {
                if (m % theThreeNumbers != 0)
                    printf("-1\n");
                else
                    printf("%lld\n", m / theThreeNumbers);
            }
        }
    }

    return 0;
}
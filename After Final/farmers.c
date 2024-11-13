#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int totalWorks = m1 * d;
        int timeRequired = totalWorks / (m1 + m2);

        int fewerTime = d - timeRequired;

        printf("%d\n", fewerTime);
    }

    return 0;
}
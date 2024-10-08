#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int array[n];
    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        sum+=array[i];
    }

    double average = (double)sum / n;

    printf("Sum: %lld, Average: %.2lf", sum, average);
}
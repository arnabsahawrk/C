#include <stdio.h>

int count_before_one(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            break;

        count++;
    }

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    int countResult = count_before_one(array, n);

    printf("%d", countResult);

    return 0;
}
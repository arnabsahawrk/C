#include <stdio.h>

void shiftZero(int arr[], int n)
{
    int pos = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }

    for (int i = pos; i < n; i++)
    {
        arr[i] = 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    shiftZero(array, n);

    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    return 0;
}
#include <stdio.h>
int main()
{
    int n, x, v;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    scanf("%d %d", &x, &v);

    array[x] = v;

    for (int j = 0, k = n - 1; j < k; j++, k--)
    {
        int temp = array[j];
        array[j] = array[k];
        array[k] = temp;
    }

    for (int l = 0; l < n; l++)
        printf("%d ", array[l]);

    return 0;
}
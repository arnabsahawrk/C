#include <stdio.h>

int isNotPalindrome(int *a, int n, int i, int j)
{
    if (i > j)
        return 0;

    return a[i] != a[j] || isNotPalindrome(a, n, i + 1, j - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    if (isNotPalindrome(array, n, 0, n - 1))
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
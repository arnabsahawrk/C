#include <stdio.h>
#include <string.h>

int fun(int a[], int n, char c[])
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n%d\n", strlen(c));

    a[0] = 2;
}
int main()
{
    int array[5] = {1, 3, 4, 5, 6};
    char string[] = "programming";

    fun(array, 5, string);

    for (int i = 0; i < 5; i++)
        printf("%d ", array[i]);

    return 0;
}
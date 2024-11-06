#include <stdio.h>
void fun(int a, int *b)
{
    a *= 10;
    (*b) *= 10;

    printf("%d %d\n", a, *b);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    fun(a, &b);

    printf("%d %d\n", a, b);
    return 0;
}
#include <stdio.h>
int add(int *a, int *b)
{
    return *a + *b;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int *ab = &a;
    int *ba = &b;

    printf("%d", add(ab, ba));

    return 0;
}
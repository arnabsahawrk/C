#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int *ab = &a, *ba = &b;

    swap(ab, ba);

    printf("%d %d", a, b);
    return 0;
}
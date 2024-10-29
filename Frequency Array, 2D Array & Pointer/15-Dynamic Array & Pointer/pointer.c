#include <stdio.h>
int main()
{
    /* int a = 5;
    int *b = &a;

    printf("%d\n", a);
    printf("%d\n", &a);

    printf("%d\n", b);
    printf("%d\n", *b);
    printf("%d\n", &b);

    *b = 6;
    printf("%d\n", a);
    printf("%d\n", *b); */

    int a = 5, b = 10;
    int *x = &a, *y = &b;
    printf("%d %d\n", *x, *y);

    int temp = *x;
    *x = *y;
    *y = temp;
    printf("%d %d\n", *x, *y);
    return 0;
}
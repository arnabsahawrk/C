#include <stdio.h>
int main()
{
    int array[5] = {1, 2, 3, 4, 5};

    int *p = array;

    printf("%d %d\n", &array[0], p);
    printf("%d\n", p + 1);

    char a = 'a';
    char *x = &a;

    printf("%d %d", x, x + 3);
    return 0;
}
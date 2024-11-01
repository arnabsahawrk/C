#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int *ab = &a, *ba = &b;

    printf("%d", abs(*ab - *ba));
    return 0;
}
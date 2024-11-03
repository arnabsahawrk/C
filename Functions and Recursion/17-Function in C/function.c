#include <stdio.h>
int add(int a, int b)
{
    printf("Function Called\n");
    return a + b;
}

int main()
{
    printf("Before\n");
    printf("Sum: %d\n", add(200, 300));
    printf("After\n");
    return 0;
}
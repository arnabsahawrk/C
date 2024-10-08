#include <stdio.h>
int main()
{
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Value: %d, Address: %lld\n", array[i], &array[i]);
    }
}
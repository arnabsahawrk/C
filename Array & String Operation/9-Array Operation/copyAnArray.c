#include <stdio.h>
int array1[100000], array2[100000];

int main()
{
    int array1length = 0, array2length = 0;

    scanf("%d", &array1length);
    array2length = array1length;

    for (int i = 0; i < array1length; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Before Copy\n");

    for (int i = 0; i < array1length; i++)
    {
        printf("%d ", array1[i]);
    }

    printf("\n");

    for (int i = 0; i < array2length; i++)
    {
        printf("%d ", array2[i]);
    }

    printf("\n");

    for (int i = 0; i < array1length; i++)
    {
        array2[i] = array1[i];
    }

    printf("\n");

    printf("After Copy\n");

    for (int i = 0; i < array1length; i++)
    {
        printf("%d ", array1[i]);
    }

    printf("\n");

    for (int i = 0; i < array2length; i++)
    {
        printf("%d ", array2[i]);
    }
}
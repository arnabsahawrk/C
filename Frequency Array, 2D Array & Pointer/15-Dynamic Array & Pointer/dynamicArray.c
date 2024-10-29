#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int *array = (int *)malloc(5 * sizeof(int));
    int *array = (int *)calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        array[i] = i;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    int *temp = array;

    array = (int *)realloc(array, 10 * sizeof(int));

    if (array == NULL)
    {
        array = temp;
    }
    else
    {
        for (int i = 5; i < 10; i++)
        {
            array[i] = i;
        }

        for (int i = 0; i < 10; i++)
        {
            printf("%d ", array[i]);
        }
    }

    free(array);
    return 0;
}
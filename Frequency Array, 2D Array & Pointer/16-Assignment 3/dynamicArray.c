#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *array = (int *)calloc(1, sizeof(int));
    int n;
    scanf("%d", &n);

    int *temp = array;

    array = (int *)realloc(array, n * sizeof(int));
    if (array == NULL)
    {
        array = temp;
        printf("Dynamic Array Failed To Allocate");
    }
    else
    {
        for (int i = 0; i < n; i++)
            scanf("%d", &array[i]);

        for (int i = 0; i < n; i++)
            printf("%d ", array[i]);
    }

    free(array);
    return 0;
}
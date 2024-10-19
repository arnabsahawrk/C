#include <stdio.h>
int array[100000];

int main()
{
    int length;
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
        scanf("%d", &array[i]);

    int position;
    scanf("%d", &position);

    if (position > length || position < 1)
    {
        printf("Position out of bound.\n");
    }
    else
    {
        length--;
        for (int i = position - 1; i < length; i++)
            array[i] = array[i + 1];

        array[length] = 0;
    }

    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);

    return 0;
}
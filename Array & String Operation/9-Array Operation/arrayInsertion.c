#include <stdio.h>
int array[100000];
int main()
{
    int length;
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
        scanf("%d", &array[i]);

    int position, value;
    scanf("%d %d", &position, &value);

    if (position > length + 1 || position < 1)
    {
        printf("Position out of bound.\n");
    }
    else
    {
        length++;
        for (int i = length; i >= position - 1; i--)
            array[i] = array[i - 1];

        array[position - 1] = value;
    }

    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);

    return 0;
}
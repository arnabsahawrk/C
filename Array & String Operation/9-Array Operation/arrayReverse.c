#include <stdio.h>
int array[100000];
int main()
{
    int length;
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
        scanf("%d", &array[i]);

    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        int temp = array[j];
        array[j] = array[i];
        array[i] = temp;
    }

    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);

    return 0;
}
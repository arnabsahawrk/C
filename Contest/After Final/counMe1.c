#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n], countTwo = 0, countThree = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if ((array[i] % 2 == 0 && array[i] % 3 == 0) || array[i] % 2 == 0)
            countTwo++;
        else if (array[i] % 3 == 0)
            countThree++;
    }

    printf("%d %d", countTwo, countThree);
    return 0;
}
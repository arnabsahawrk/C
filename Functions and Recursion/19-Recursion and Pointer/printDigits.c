#include <stdio.h>
void printDigits(int digits)
{
    if (digits == 0)
        return;

    printDigits(digits / 10);
    printf("%d ", digits % 10);
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int x;
        scanf("%d", &x);

        if (x == 0)
            printf("0");
        else
            printDigits(x);

        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int N;
    scanf("%d", &N);
    int array[N];

    for (int i = 0; i < N; i++)
        scanf("%d", &array[i]);

    bool isPalindrome = true;
    for (int i = 0, j = N - 1; i < j; i++, j--)
    {
        if (array[i] != array[j])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        printf("YES");
    else
        printf("NO");

    return 0;
}
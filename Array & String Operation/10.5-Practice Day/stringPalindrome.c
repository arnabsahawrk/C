#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%s", str);

    bool isPalindrome = true;
    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
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
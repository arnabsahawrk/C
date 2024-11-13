#include <stdio.h>
#include <string.h>
int is_palindrome(char *str)
{
    int isPalindrome = 1;
    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0;
            break;
        }
    }

    return isPalindrome;
}
int main()
{
    char str[1001];
    scanf("%s", str);

    int palindromeResult = is_palindrome(str);

    if (palindromeResult)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
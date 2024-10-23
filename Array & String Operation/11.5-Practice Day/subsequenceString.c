#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001];
    char hello[] = "hello";
    scanf("%s", str);

    int i = 0, helloI = 0;
    while (str[i] != '\0')
    {
        if (str[i] == hello[helloI] && hello[helloI] != '\0')
            helloI++;
        i++;
    }

    if (hello[helloI] == '\0')
        printf("YES");
    else
        printf("NO");

    return 0;
}
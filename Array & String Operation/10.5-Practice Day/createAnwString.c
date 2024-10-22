#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1001], str2[1001];
    scanf("%s %s", str1, str2);

    int str1Length = strlen(str1);
    int str2Length = strlen(str2);

    printf("%d %d\n%s %s", str1Length, str2Length, str1, str2);
    return 0;
}
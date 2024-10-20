#include <stdio.h>
int main()
{
    char str[50] = "Arnab Saha is competitive programmer.";

    // scanf("%[^\n]s", str);
    // gets(str);
    // puts(str);

    fgets(str, sizeof(str), stdin);
    fputs(str, stdout);

    return 0;
}
#include <stdio.h>
#include <string.h>
int frequencyArray[26] = {0};
int main()
{
    char name[11] = "arnab";

    for (int i = 0; i < strlen(name); i++)
    {
        frequencyArray[name[i] - 'a'] = 1;
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        count += frequencyArray[i];
    }

    printf("%d unique character found in this string.", count);
}
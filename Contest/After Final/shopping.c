#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);

    if (n <= 1000)
        printf("Bad luck!\n");
    else if (n > 1000 && n < 1500)
        printf("I will buy Punjabi\n");
    else
        printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");

    return 0;
}
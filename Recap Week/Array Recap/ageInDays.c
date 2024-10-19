#include <stdio.h>
int main()
{
    int n, years, months, days;
    scanf("%d", &n);

    years = n / 365;
    months = (n - (365 * years)) / 30;
    days = n - ((365 * years) + (30 * months));

    printf("%d years\n%d months\n%d days", years, months, days);

    return 0;
}
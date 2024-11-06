#include <stdio.h>
void distribute(int roll, int chocolate)
{
    if (chocolate == 0)
        return;

    printf("Roll %d receive %d chocolate and take 1.\n", roll, chocolate);
    distribute(roll + 1, chocolate - 1);
}
int main()
{
    distribute(1, 3);
    return 0;
}
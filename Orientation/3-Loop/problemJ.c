#include<stdio.h>

int main(){

    int A, B;
    scanf("%d %d", &A, &B);

    A % B == 0 ? printf("Multiples") : B % A == 0 ? printf("Multiples") : printf("No Multiples");
    return 0;
}
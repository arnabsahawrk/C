#include<stdio.h>

int main(){
    int X;
    scanf("%d", &X);

    X/=1000;

    X % 2 == 0 ? printf("EVEN") : printf("ODD");
}
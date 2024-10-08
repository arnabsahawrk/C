#include<stdio.h>
int main(){

    unsigned short int N;
    scanf("%hu", &N);

    for(int i=1; i<=12; i++){
        printf("%d * %d = %d\n", N, i, N*i);
    }

    return 0;
}
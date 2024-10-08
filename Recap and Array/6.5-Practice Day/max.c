#include<stdio.h>
#include<limits.h>

int main(){
    unsigned short int N;
    scanf("%hu", &N);
    int X, max=INT_MIN;

    for(int i=0; i<N; i++){
        scanf("%d", &X);
        if(X>max) max=X;
    }

    printf("%d", max);

    return 0;

}
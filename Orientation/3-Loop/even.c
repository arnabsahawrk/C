#include<stdio.h>

int main(){
    unsigned short int N;
    scanf("%hu", &N);

    if(N<=1){
        printf("-1");
        return 0;
    }

    for(int i=2; i<=N; i++){
        if(i%2==0) printf("%d\n", i);
    }


    return 0;
}
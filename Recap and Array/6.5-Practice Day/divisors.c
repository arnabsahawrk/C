#include<stdio.h>
int main(){
    unsigned short int n;
    scanf("%hu", &n);

    printf("1\n");

    for(int i=2; i<=n/2; i++){
        if(n%i==0)printf("%d\n", i);
    }

    if(n>1){
        printf("%hu", n);
    }

    return 0;
}
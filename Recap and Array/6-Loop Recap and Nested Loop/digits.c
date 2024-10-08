#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        int T;
        scanf("%d", &T);

        int digit=T;

        do{
            printf("%d ", digit%10);

            digit/=10;
        }while (digit != 0);

        printf("\n");
        
    }
}
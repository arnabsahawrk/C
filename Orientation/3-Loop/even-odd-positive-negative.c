#include<stdio.h>

int main(){
    unsigned short int N;
    scanf("%hu", &N);

    int input, even = 0, odd = 0, positive = 0, negative = 0;
    for(int i=0; i<N; i++){
        scanf("%d", &input);

        if(input> 0){
            positive++;
            if(input % 2 == 0){
            even++;
        }else{
            odd++;
        }
        }else if (input < 0)
        {
            negative++;
             if(input % 2 == 0){
            even++;
        }else{
            odd++;
        }
        }else{
            even ++;
        }
        
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);

    return 0;
}
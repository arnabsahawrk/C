#include<stdio.h>


int main(){
    int a;

    scanf("%d", &a);

    if(a<5){
        printf("a is less than 5\n");
    }else if(a < 10){
        printf("a is less than 10\n");
    }else{
        if(a< 15){
            printf("a is less than 15\n");
        }else{
            printf("a is grater than 14");
        }
    }
}